#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>

class Board {
private:
    char grid[3][3];
    int filledCells;

public:
    Board();

    // method to display board
    void displayBoard();
    void makeMove(int row, int col, char sym);
    // check the player move is valid
    bool isValidMove(int row, int col);
        // check the board is full
    bool isFullBoard();

    // check board win conditions
    bool checkRow(char sym);
    bool checkColumn(char sym);
    bool checkDiagonal(char sym);
    bool checkWin(char sym);
    bool checkDraw(char sym1, char sym2);
    char getCell(int row, int col) const;
};

#endif
