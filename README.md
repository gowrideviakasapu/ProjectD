# ProjectD
# Demo project structure set up for modern CMake and C++ 17

# Tic Toc Toe Game
This repo contains a skeleton C++ project set up with following goals in mind:

modern C++
directory structure of "src", "include"

# USE
cd .\tic-tac-toe
mkdir build
cmake -S .\tic-tac-toe -B .\tic-tac-toe\build
cmake --build .\tic-tac-toe\build --config Debug
& .\tic-tac-toe\build\Debug\TicTocToeProject.exe