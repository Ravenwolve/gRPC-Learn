#include <absl/container/internal/compressed_tuple.h>
#include <iostream>
#include <memory>
#include <string>

#include "shop.grpc.pb.h"
#include "shop.pb.h"
#include <grpcpp/grpcpp.h>

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
  Status PlaceOrder(ServerContext *context, const PlaceOrderRequest *request,
                    PlaceOrderResponse *response) override {
    static int order_counter = 1000;
    int order_id = order_counter++;

    std::cout << "Получен заказ: размер=" << request->size()
              << ", цвет=" << request->color()
              << ", надпись=" << request->text() << std::endl;

    orders[order_id] = OrderStatus::MAKING;

    response->set_order_id(order_id);
    return Status::OK;
  }

  Status CheckStatus(ServerContext *context, const CheckStatusRequest *request,
                     CheckStatusResponse *response) override {
    int id = request->order_id();
    std::cout << "Проверка статуса заказа #" << id << std::endl;

    OrderStatus status = OrderStatus::UNKNOWN;
    OrderStatus next_status = OrderStatus::UNKNOWN;
    if (orders.contains(id)) {
      OrderStatus status = orders[id];
      if (std::rand() % 3 == 0) {
        if (status == OrderStatus::MAKING)
          next_status = OrderStatus::IN_TRANSIT;
        if (status == OrderStatus::IN_TRANSIT)
          next_status = OrderStatus::DELIVERED;
      }
    }
    status = next_status;

    response->set_status(OrderStatus::IN_TRANSIT);
    return Status::OK;
  }

  std::map<int, OrderStatus> orders;
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
