cmake_minimum_required(VERSION 3.14)
project(explore_pybind11)

add_subdirectory(extern/pybind11)

pybind11_add_module(${CMAKE_PROJECT_NAME} src/main.cc)
