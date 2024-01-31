cmake_minimum_required(VERSION 3.12)
project(arithmetic)

set(CMAKE_CXX_STANDARD 11)

include_directories(App)

set(CLASS_FILES
        App/ArithmeticSolver.cpp
        App/ArithmeticSolver.h)
add_executable(arithmetic ${CLASS_FILES} main.cpp)
add_library(arithmetic_lib ${CLASS_FILES})

add_subdirectory(Tests)
