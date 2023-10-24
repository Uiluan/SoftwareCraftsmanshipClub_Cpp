cmake_minimum_required(VERSION 3.12)
project(fizzbuzz)

set(CMAKE_CXX_STANDARD 11)

include_directories(App)

set(CLASS_FILES
        App/FizzBuzz.cpp
        App/FizzBuzz.h)
add_executable(fizzbuzz ${CLASS_FILES} main.cpp)
add_library(FizzBuzz_lib ${CLASS_FILES})

add_subdirectory(Tests)
