cmake_minimum_required(VERSION 3.13)
project(billingProject)
set(CMAKE_CXX_STANDARD 14)

include_directories(include)
include_directories(src)
set(
        SOURCE_FILES
        main.cpp
        src/product.cpp include/product.h src/bin.cpp include/bin.h src/calculator.cpp include/calculator.h)
add_executable(billingProject ${SOURCE_FILES} include/product.h src/bin.cpp include/bin.h src/calculator.cpp include/calculator.h)
