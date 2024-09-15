cmake_minimum_required(VERSION 3.22.1)
project (Sum)

enable_testing()

include_directories(include)

find_package(GTest REQUIRED)

add_executable(Sum main.cpp src/sum.cpp)
target_link_libraries(Sum)

add_executable(SumTests src/sum.cpp test/sumTest.cpp)
target_link_libraries(SumTests GTest::gtest)

add_test(NAME SumTests COMMAND "./SumTests")