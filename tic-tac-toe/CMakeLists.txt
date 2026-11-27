cmake_minimum_required(VERSION 3.11)
project(TicTocToeProject VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(TicTocToeProject
    src/main.cpp
    src/board.cpp
    src/computer.cpp
    src/player.cpp
)
target_include_directories(TicTocToeProject PRIVATE inc)

# set_property(TARGET TicTocToeProject PROPERTY CXX_STANDARD 17)

include(CTest)
enable_testing()