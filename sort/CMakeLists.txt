cmake_minimum_required(VERSION 3.7)
project(sort)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        bubble_sort.cpp
        heap_sort.cpp
        insert_sort.cpp
        main.cpp
        merge_sort.cpp
        quick_sort.cpp
        sort.h counting_sort.cpp radix_sort.cpp)

add_executable(sort ${SOURCE_FILES})