FROM alt:sisyphus

RUN apt-get update && \
    apt-get dist-upgrade -y && \
    apt-get install -y \
        make cmake cmake-modules gcc-c++ \
        libprotobuf-devel \
        libgrpc++-devel \
        libre2-devel \
        libcares-devel \
        libssl-devel \
        grpc-plugins

WORKDIR /app
COPY . .

RUN mkdir build && cd build && \
    cmake .. && make -j$(nproc)

CMD ["/app/build/grpc-learn-server"]
