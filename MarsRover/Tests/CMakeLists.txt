project(google_tests)

add_subdirectory(googletest-lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(../DummyOutputStreamBuf)
include_directories(_mock)

set(TEST_FILES 
        _unit/CommandParserTests.cpp
        _unit/RoverControllerTests.cpp)
add_executable(google_tests_run ${TEST_FILES})

target_link_libraries(google_tests_run MarsRover_lib)
target_link_libraries(google_tests_run gtest gtest_main)
target_link_libraries(google_tests_run gmock gmock_main)
