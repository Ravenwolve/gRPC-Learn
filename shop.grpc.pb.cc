// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: shop.proto

#include "shop.pb.h"
#include "shop.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace shop {

static const char* ShopService_method_names[] = {
  "/shop.ShopService/PlaceOrder",
  "/shop.ShopService/CheckStatus",
};

std::unique_ptr< ShopService::Stub> ShopService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ShopService::Stub> stub(new ShopService::Stub(channel, options));
  return stub;
}

ShopService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_PlaceOrder_(ShopService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CheckStatus_(ShopService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ShopService::Stub::PlaceOrder(::grpc::ClientContext* context, const ::shop::PlaceOrderRequest& request, ::shop::PlaceOrderResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::shop::PlaceOrderRequest, ::shop::PlaceOrderResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_PlaceOrder_, context, request, response);
}

void ShopService::Stub::async::PlaceOrder(::grpc::ClientContext* context, const ::shop::PlaceOrderRequest* request, ::shop::PlaceOrderResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::shop::PlaceOrderRequest, ::shop::PlaceOrderResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PlaceOrder_, context, request, response, std::move(f));
}

void ShopService::Stub::async::PlaceOrder(::grpc::ClientContext* context, const ::shop::PlaceOrderRequest* request, ::shop::PlaceOrderResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PlaceOrder_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::shop::PlaceOrderResponse>* ShopService::Stub::PrepareAsyncPlaceOrderRaw(::grpc::ClientContext* context, const ::shop::PlaceOrderRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::shop::PlaceOrderResponse, ::shop::PlaceOrderRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_PlaceOrder_, context, request);
}

::grpc::ClientAsyncResponseReader< ::shop::PlaceOrderResponse>* ShopService::Stub::AsyncPlaceOrderRaw(::grpc::ClientContext* context, const ::shop::PlaceOrderRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPlaceOrderRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status ShopService::Stub::CheckStatus(::grpc::ClientContext* context, const ::shop::CheckStatusRequest& request, ::shop::CheckStatusResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::shop::CheckStatusRequest, ::shop::CheckStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CheckStatus_, context, request, response);
}

void ShopService::Stub::async::CheckStatus(::grpc::ClientContext* context, const ::shop::CheckStatusRequest* request, ::shop::CheckStatusResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::shop::CheckStatusRequest, ::shop::CheckStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CheckStatus_, context, request, response, std::move(f));
}

void ShopService::Stub::async::CheckStatus(::grpc::ClientContext* context, const ::shop::CheckStatusRequest* request, ::shop::CheckStatusResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CheckStatus_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::shop::CheckStatusResponse>* ShopService::Stub::PrepareAsyncCheckStatusRaw(::grpc::ClientContext* context, const ::shop::CheckStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::shop::CheckStatusResponse, ::shop::CheckStatusRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CheckStatus_, context, request);
}

::grpc::ClientAsyncResponseReader< ::shop::CheckStatusResponse>* ShopService::Stub::AsyncCheckStatusRaw(::grpc::ClientContext* context, const ::shop::CheckStatusRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCheckStatusRaw(context, request, cq);
  result->StartCall();
  return result;
}

ShopService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ShopService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ShopService::Service, ::shop::PlaceOrderRequest, ::shop::PlaceOrderResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](ShopService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::shop::PlaceOrderRequest* req,
             ::shop::PlaceOrderResponse* resp) {
               return service->PlaceOrder(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ShopService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ShopService::Service, ::shop::CheckStatusRequest, ::shop::CheckStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](ShopService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::shop::CheckStatusRequest* req,
             ::shop::CheckStatusResponse* resp) {
               return service->CheckStatus(ctx, req, resp);
             }, this)));
}

ShopService::Service::~Service() {
}

::grpc::Status ShopService::Service::PlaceOrder(::grpc::ServerContext* context, const ::shop::PlaceOrderRequest* request, ::shop::PlaceOrderResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ShopService::Service::CheckStatus(::grpc::ServerContext* context, const ::shop::CheckStatusRequest* request, ::shop::CheckStatusResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace shop

