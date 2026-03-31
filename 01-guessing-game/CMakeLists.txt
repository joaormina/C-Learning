cmake_minimum_required(VERSION 3.10)
project(GuessingGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add source files
add_executable(guessing_game
    src/main.cpp
)

# Include directories
target_include_directories(guessing_game PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
