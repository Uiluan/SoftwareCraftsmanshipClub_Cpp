cmake_minimum_required(VERSION 3.12)
project(MarsRover)

set(CMAKE_CXX_STANDARD 11)

include_directories(App)

set(CLASS_FILES
        App/Rover/RoverController.cpp
        App/Rover/RoverController.h
        App/CommandParser/CommandParser.cpp
        App/CommandParser/CommandParser.h)
add_executable(marsrover ${CLASS_FILES} main.cpp)
#add_library(MarsRover_lib ${CLASS_FILES})

#add_subdirectory(Tests)
