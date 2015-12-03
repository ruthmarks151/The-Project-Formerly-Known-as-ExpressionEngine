cmake_minimum_required(VERSION 3.3)
project(ExpressionEngine)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x -fpermissive")

set(SOURCE_FILES main.cpp Expression.cpp Expression.h ArithmeticExpression.cpp ArithmeticExpression.h Addition.cpp Addition.h Multiplication.cpp Multiplication.h Division.cpp Division.h)
add_executable(ExpressionEngine ${SOURCE_FILES} Multiplication.cpp Multiplication.h)