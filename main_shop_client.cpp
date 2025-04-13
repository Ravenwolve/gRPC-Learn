#include <iostream>
#include <memory>
#include <string>

#include "shop.grpc.pb.h"
#include <grpcpp/grpcpp.h>

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using shop::CheckStatusRequest;
using shop::CheckStatusResponse;
using shop::OrderStatus;
using shop::PlaceOrderRequest;
using shop::PlaceOrderResponse;
using shop::ShopService;

class ShopClient {
public:
  ShopClient(std::shared_ptr<Channel> channel)
      : stub_(ShopService::NewStub(channel)) {}

  int PlaceOrder(const std::string &size, const std::string &color,
                 const std::string &text) {
    PlaceOrderRequest request;
    request.set_size(size);
    request.set_color(color);
    request.set_text(text);

    PlaceOrderResponse response;
    ClientContext context;

    Status status = stub_->PlaceOrder(&context, request, &response);
    if (status.ok()) {
      std::cout << "✅ Заказ оформлен. Номер заказа: " << response.order_id()
                << std::endl;
      return response.order_id();
    } else {
      std::cerr << "❌ Ошибка при заказе: " << status.error_message()
                << std::endl;
      return -1;
    }
  }

  void CheckStatus(int order_id) {
    CheckStatusRequest request;
    request.set_order_id(order_id);

    CheckStatusResponse response;
    ClientContext context;

    Status status = stub_->CheckStatus(&context, request, &response);

    if (status.ok()) {
      std::cout << "📦 Статус заказа #" << order_id << ": "
                << StatusToString(response.status()) << std::endl;
    } else {
      std::cerr << "❌ Ошибка при получении статуса: " << status.error_message()
                << std::endl;
    }
  }

private:
  std::unique_ptr<ShopService::Stub> stub_;

  std::string StatusToString(OrderStatus status) {
    switch (status) {
    case OrderStatus::MAKING:
      return "Делается";
    case OrderStatus::IN_TRANSIT:
      return "В пути";
    case OrderStatus::DELIVERED:
      return "Доставлен";
    default:
      return "Неизвестно";
    }
  }
};

void PrintMenu() {
  std::cout << "\n--- Меню ---\n"
            << "1. Заказать футболку\n"
            << "2. Проверить статус заказа\n"
            << "0. Выход\n"
            << "Выберите действие: ";
}

int main() {
  auto address = std::string("localhost:50051");
  ShopClient client(
      grpc::CreateChannel(address, grpc::InsecureChannelCredentials()));

  int choice;
  while (true) {
    PrintMenu();
    std::cin >> choice;
    std::cin.ignore(); // очистка буфера

    if (choice == 0) {
      std::cout << "Выход...\n";
      break;
    }

    if (choice == 1) {
      std::string size, color, text;

      std::cout << "Размер футболки (например, M, L, XL): ";
      std::getline(std::cin, size);

      std::cout << "Цвет футболки: ";
      std::getline(std::cin, color);

      std::cout << "Надпись: ";
      std::getline(std::cin, text);

      client.PlaceOrder(size, color, text);
    } else if (choice == 2) {
      int order_id;
      std::cout << "Введите номер заказа: ";
      std::cin >> order_id;
      std::cin.ignore();

      client.CheckStatus(order_id);
    } else {
      std::cout << "❗ Неверный выбор\n";
    }
  }

  return 0;
}
