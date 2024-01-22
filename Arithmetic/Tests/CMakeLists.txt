project(google_tests)

add_subdirectory(googletest-lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(../DummyOutputStreamBuf)

set(TEST_FILES ArithmeticTests.cpp)
add_executable(google_tests_run ${TEST_FILES})

target_link_libraries(google_tests_run arithmetic_lib)
target_link_libraries(google_tests_run gtest gtest_main)
