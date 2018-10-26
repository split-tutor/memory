cmake_minimum_required(VERSION 3.4)

add_executable(compound compound.cpp)
add_executable(memory memory.cpp)
add_executable(more_memory more_memory.cpp more_memory.h)

add_executable(test_rectaogle rectangle.h rectangle.cpp test_rectangle.cpp )