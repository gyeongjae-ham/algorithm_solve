cmake_minimum_required(VERSION 3.21)

project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled c++/start.cpp c++/type.cpp c++/input.cpp c++/getline.cpp c++/float.cpp c++/printf.cpp c++/casting.cpp c++/string.cpp c++/split.cpp c++/pair.cpp c++/pair2.cpp c++/tuple.cpp c++/tuple2.cpp)

add_executable(start c++/start.cpp)
add_executable(type c++/type.cpp)
add_executable(input c++/input.cpp)
add_executable(getline c++/getline.cpp)
add_executable(float c++/float.cpp)
add_executable(printf c++/printf.cpp)
add_executable(casting c++/casting.cpp)
add_executable(string c++/string.cpp)
add_executable(split c++/split.cpp)
add_executable(pair c++/pair.cpp)
add_executable(pair2 c++/pair2.cpp)
add_executable(tuple c++/tuple.cpp)
add_executable(tuple2 c++/tuple2.cpp)