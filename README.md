# ProjectD

ProjectD is a collection of C++ practice programs and a command-line Tic-Tac-Toe
game. The game is built with CMake and requires C++17.

## Repository structure

```text
ProjectD/
├── fun-practise/          # Standalone C++ practice programs
└── tic-tac-toe/
    ├── CMakeLists.txt     # CMake project definition
    ├── inc/               # Header files
    └── src/               # Game implementation
```

The `fun-practise` programs can be compiled individually. The Tic-Tac-Toe game
is the repository's CMake-managed application.

## Tic-Tac-Toe

The game supports:

- Single-player mode against a basic computer opponent.
- Two-player mode on the same computer.
- Input validation for occupied or out-of-range board positions.
- Win and draw detection.

In single-player mode, the computer tries to complete a winning line, blocks an
immediate player win, and otherwise prefers the center before choosing an
available square.

## Requirements

- CMake 3.11 or newer.
- A C++17 compiler. On Windows, install Visual Studio with the **Desktop
  development with C++** workload, or another supported C++ toolchain.

Check that CMake is available:

```powershell
cmake --version
```

## Build and run on Windows

Run these commands from the repository root (`ProjectD`). CMake will generate
the build files in `tic-tac-toe\build`:

```powershell
cmake -S .\tic-tac-toe -B .\tic-tac-toe\build
cmake --build .\tic-tac-toe\build --config Debug
& .\tic-tac-toe\build\Debug\TicTocToeProject.exe
```

To build and run the Release configuration instead:

```powershell
cmake --build .\tic-tac-toe\build --config Release
& .\tic-tac-toe\build\Release\TicTocToeProject.exe
```

When prompted, choose `1` for single-player or `2` for two-player mode. Enter
the row and column as numbers from `1` to `3`.
