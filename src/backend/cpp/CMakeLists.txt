cmake_minimum_required(VERSION 3.4...3.18)
project(product_credit_calculator)

set(CMAKE_CXX_STANDARD 14)

# Add pybind11
add_subdirectory(pybind11)

# Include the pybind11 headers
include_directories(pybind11/include)

# Add the Python modules
pybind11_add_module(calculator calculator.cpp)
pybind11_add_module(sorting sorting.cpp)