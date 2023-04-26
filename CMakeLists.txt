cmake_minimum_required(VERSION 3.21)
project(Graph)

set(CMAKE_CXX_STANDARD 14)

add_executable(Graph main.cpp Node.cpp Edge.cpp Digraph.cpp HashFunctions.cpp)
