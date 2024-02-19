cmake_minimum_required(VERSION 3.12)
project(orionsBagOfHolding)

set(CMAKE_CXX_STANDARD 11)

include_directories(App)

set(CLASS_FILES
        App/OrionsBagOfHolding.cpp
        App/OrionsBagOfHolding.h)
add_executable(orionsBagOfHolding ${CLASS_FILES} main.cpp)
add_library(OrionsBagOfHolding_lib ${CLASS_FILES})

add_subdirectory(Tests)
