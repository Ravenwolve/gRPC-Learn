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
        grpc-plugins \
        nlohmann-json-devel \
        netcat

WORKDIR /app
COPY . .

RUN rm -rf build
RUN mkdir build && cd build && \
    cmake .. && make -j$(nproc)


COPY start-services.sh /app/start_services.sh
RUN chmod +x /app/start_services.sh
CMD ["/app/start_services.sh"]

#CMD ["/app/build/grpc-learn-server"]
#CMD ["sh", "-c", "/app/build/grpc-learn-server & /app/build/grpc-learn-client"]

# RUN apt-get update && apt-get install -y tini
# ENTRYPOINT ["/usr/bin/tini", "--"]
# CMD ["/app/build/grpc-learn-client", "/app/build/grpc-learn-server"]

# ENTRYPOINT ["/bin/sh", "-c"]
# CMD ["/app/build/grpc-learn-client /app/build/grpc-learn-server & wait"]

