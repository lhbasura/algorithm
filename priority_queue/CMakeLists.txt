cmake_minimum_required(VERSION 3.7)
project(priority_queue)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp priority_queue.h insert.cpp)
add_executable(priority_queue ${SOURCE_FILES})