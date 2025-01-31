cmake_minimum_required(VERSION 3.30)
project(RubicksCubeSolver)

set(CMAKE_CXX_STANDARD 20)

add_executable(RubicksCubeSolver main.cpp
        RubiksCube.cpp
        RubiksCube.h
        RubiksCube3dArray.cpp
        RubicksCube3dArray.h
        DFSSolver.h)
