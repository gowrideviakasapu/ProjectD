#include<iostream>

class Board{
    private:
        char grid[3][3];
        int filledCells;

    public:
        Board();

        // method to display board
        void displayBoard();
        void makeMove();
        // check the player move is valid
        bool isValidMove();
        // check the board is full
        bool isFullBoard();

        // check board win conditions
        bool checkRow(char sym);
        bool checkColumn(char sym);
        bool checkDiagonal(char sym);
        bool checkWin(char sym);

    
};
