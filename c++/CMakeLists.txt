cmake_minimum_required(VERSION 3.21)

project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled start.cpp type.cpp input.cpp getline.cpp float.cpp printf.cpp casting.cpp string.cpp split.cpp pair.cpp pair2.cpp tuple.cpp)

add_executable(start start.cpp)
add_executable(type type.cpp)
add_executable(input input.cpp)
add_executable(getline getline.cpp)
add_executable(float float.cpp)
add_executable(printf printf.cpp)
add_executable(casting casting.cpp)
add_executable(string string.cpp)
add_executable(split split.cpp)
add_executable(pair pair.cpp)
add_executable(pair2 pair2.cpp)
add_executable(tuple tuple.cpp)