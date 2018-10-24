cmake_minimum_required(VERSION 3.10)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

add_executable(algorithm main.cpp SortTestHelper.h Student.h SelectionSort.h InsertionSort.h MergeSort.h)