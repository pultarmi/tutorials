cmake_minimum_required(VERSION 3.17)
project(pybind_example CXX)
set(CMAKE_CXX_STANDARD 20)


set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

find_package(pybind11 REQUIRED)

pybind11_add_module(binded_tools main.cpp
)

configure_file(test.py ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/test.py COPYONLY)