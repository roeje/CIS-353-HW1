cmake_minimum_required(VERSION 3.3)
project(WordPuzzleSolver)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp WordPuzzleSolver.cpp WordPuzzleSolver.h)
add_executable(WordPuzzleSolver ${SOURCE_FILES} WordPuzzleSolver.cpp WordPuzzleSolver.h)