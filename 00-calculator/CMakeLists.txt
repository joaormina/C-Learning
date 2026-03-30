cmake_minimum_required(VERSION 3.10)
project(Calculator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add source files
add_executable(calculator
    src/main.cpp
    src/calculator.cpp
)

# Include directories
target_include_directories(calculator PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
