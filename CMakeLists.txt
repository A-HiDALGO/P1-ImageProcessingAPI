cmake_minimum_required(VERSION 3.23)
project(P1_ImageProcessingAPI)

set(CMAKE_CXX_STANDARD 14)

add_executable(SERVER server.cpp)
add_executable(Client client.cpp)

