#include <absl/container/internal/compressed_tuple.h>
#include <iostream>
#include <memory>
#include <string>

#include "shop.grpc.pb.h"
#include "shop.pb.h"
#include <grpcpp/grpcpp.h>

#include <nlohmann/json.hpp>
#include <fstream>

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

using shop::CheckStatusRequest;
using shop::CheckStatusResponse;
using shop::OrderStatus;
using shop::PlaceOrderRequest;
using shop::PlaceOrderResponse;
using shop::ShopService;

class ShopServiceImpl final : public ShopService::Service {
public:

  ShopServiceImpl()
  {
    std::ifstream fin("/app/data/db.json");
    if (!fin.is_open())
      std::cout << "Первый запуск, базы данных ещё не было\n";
    else
    {
      fin >> database;
      fin.close();
      for (const auto& [key, value]: database.items())
      {
        if (value.is_number_integer())
          orders[std::stoi(key)] = static_cast<OrderStatus>(value.get<int>());
      }
    }
  }

  void SaveDatabase()
  {
    std::ofstream fout("/app/data/db.json");
    database.clear();
    for (const auto& [key, value]: orders)
    {
      database[key] = static_cast<int>(value);
    }
    fout << database;
    std::cout << "База данных сохранена\n";
    fout.close();
  }

  Status PlaceOrder(ServerContext *context, const PlaceOrderRequest *request,
                    PlaceOrderResponse *response) override {
    static int order_counter = 1000;
    int order_id = order_counter++;

    std::cout << "Получен заказ: размер=" << request->size()
              << ", цвет=" << request->color()
              << ", надпись=" << request->text() << std::endl;

    orders[order_id] = OrderStatus::MAKING;

    response->set_order_id(order_id);

    SaveDatabase();
    return Status::OK;
  }

  Status CheckStatus(ServerContext *context, const CheckStatusRequest *request,
                     CheckStatusResponse *response) override {
    int id = request->order_id();
    std::cout << "Проверка статуса заказа #" << id << std::endl;

    OrderStatus status = OrderStatus::UNKNOWN;
    if (orders.contains(id)) {
      status = orders[id];
      if (std::rand() % 3 == 0) {
        if (status == OrderStatus::MAKING)
          status = OrderStatus::IN_TRANSIT;
        else if (status == OrderStatus::IN_TRANSIT)
          status = OrderStatus::DELIVERED;
      }
      orders[id] = status;
    }

    response->set_status(status);
    return Status::OK;
  }

  std::map<int, OrderStatus> orders;
  nlohmann::json database;

};

void RunServer() {
  std::string server_address("localhost:50051");
  ShopServiceImpl service;

  ServerBuilder builder;
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);

  std::unique_ptr<Server> server(builder.BuildAndStart());
  std::cout << "Сервер слушает на " << server_address << std::endl;
  server->Wait();
}

int main() {
  RunServer();
  return 0;
}
