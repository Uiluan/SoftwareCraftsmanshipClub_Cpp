cmake_minimum_required(VERSION 3.12)
project(alphabetCipher)

set(CMAKE_CXX_STANDARD 11)

include_directories(App)

set(CLASS_FILES
        App/AlphabetCipher.cpp
        App/AlphabetCipher.h)
add_executable(alphabetCipher ${CLASS_FILES} main.cpp)
add_library(AlphabetCipher_lib ${CLASS_FILES})

add_subdirectory(Tests)
