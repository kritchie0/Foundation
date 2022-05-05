cmake_minimum_required(VERSION 3.21)
project(Foundation)

set(CMAKE_C_STANDARD 99)

add_executable(Foundation main.c mock/embedded.c mock/embedded.h)
