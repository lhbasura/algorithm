cmake_minimum_required(VERSION 3.7)
project(package_question)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp package_question.h)
add_executable(package_question ${SOURCE_FILES})