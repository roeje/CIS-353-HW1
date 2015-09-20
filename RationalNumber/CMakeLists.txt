cmake_minimum_required(VERSION 3.3)
project(RationalNumber)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp RationalNumber.h RationalNumber.cpp )
add_executable(RationalNumber ${SOURCE_FILES} RationalNumber.h)