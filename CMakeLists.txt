cmake_minimum_required(VERSION 3.22)
project(AbsLinearClustering)

set(CMAKE_CXX_STANDARD 17)

add_executable(AbsLinearClustering main.cpp src/cluster.cpp src/distances.hpp)
