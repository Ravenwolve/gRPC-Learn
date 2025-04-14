#!/bin/sh

# Функция для проверки, запущен ли сервер
wait_for_server() {
    while ! nc -z localhost 50051; do  # Замените 50051 на порт вашего сервера
        sleep 1
    done
}

# Функция для обработки завершения
cleanup() {
    echo "Завершение процессов..."
    kill $SERVER_PID 2>/dev/null
    exit
}

# Установка обработчика сигнала
trap cleanup SIGINT SIGTERM

# Запускаем сервер в фоновом режиме
/app/build/grpc-learn-server &

# Запоминаем PID сервера
SERVER_PID=$!

# Ждем, пока сервер не станет доступен
wait_for_server

# Запускаем клиент
/app/build/grpc-learn-client

# Ждем завершения клиента
wait $SERVER_PID

# Завершаем сервер, если он все еще работает
kill $SERVER_PID 2>/dev/null
