cmake_minimum_required(VERSION 3.21)
project(Test)

set(CMAKE_CXX_STANDARD 14)

add_executable(Test main.cpp Graph.h Node.h Node.cpp Edge.cpp Edge.h Digraph.cpp Digraph.h HashFunctions.cpp HashFunctions.h)
