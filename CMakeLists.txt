cmake_minimum_required(VERSION 3.3)
project(ExpressionEngine)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x -fpermissive")

set(SOURCE_FILES main.cpp)
add_executable(ExpressionEngine ${SOURCE_FILES})