cmake_minimum_required(VERSION 3.15)
project(mofish)

set(CMAKE_CXX_STANDARD 14)

add_executable(mofish main.cpp)

install(TARGETS mofish)

enable_testing()

add_test(NAME mofish COMMAND fish)