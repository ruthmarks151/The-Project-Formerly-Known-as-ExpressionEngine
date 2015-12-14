cmake_minimum_required(VERSION 3.3)
project(ExpressionEngine)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x -fpermissive")

set(SOURCE_FILES HWK6_MARKSR2.cpp Expression.cpp Expression.h ArithmeticExpression.cpp ArithmeticExpression.h Addition.cpp Addition.h Subtraction.cpp Subtraction.h Multiplication.cpp Multiplication.h Division.cpp Division.h IntegerExpression.cpp IntegerExpression.h)
add_executable(ExpressionEngine ${SOURCE_FILES} Multiplication.cpp Multiplication.h IntegerExpression.cpp IntegerExpression.h)

