cmake_minimum_required(VERSION 3.23 FATAL_ERROR)

project(grpc-learn)
set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME}-server
  shop.grpc.pb.cc
  shop.pb.cc
  main_shop_server.cpp
)

add_executable(${PROJECT_NAME}-client
  shop.grpc.pb.cc
  shop.pb.cc
  main_shop_client.cpp
)

option(protobuf_MODULE_COMPATIBLE TRUE)
find_package(Protobuf CONFIG REQUIRED)
message(STATUS "Using protobuf ${Protobuf_VERSION}")

find_package(gRPC CONFIG REQUIRED)
message(STATUS "Using gRPC ${gRPC_VERSION}")

set(_PROTOBUF_LIBPROTOBUF protobuf::libprotobuf)
set(_REFLECTION gRPC::grpc++_reflection)
set(_GRPC_GRPCPP gRPC::grpc++)

find_package(nlohmann_json REQUIRED)

target_link_libraries(${PROJECT_NAME}-server PRIVATE
  ${_REFLECTION}
  ${_GRPC_GRPCPP}
  ${_PROTOBUF_LIBPROTOBUF}
  nlohmann_json::nlohmann_json
)

target_link_libraries(${PROJECT_NAME}-client PRIVATE
  ${_REFLECTION}
  ${_GRPC_GRPCPP}
  ${_PROTOBUF_LIBPROTOBUF}
)
