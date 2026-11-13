#include "computer.hpp"

#include <iostream>

using namespace std;

ComputerOpponent::ComputerOpponent(char sym, Board& gameBoard)
    : symbol(sym), board(gameBoard) {}

char ComputerOpponent::getSymbol() const {
    return symbol;
}

bool ComputerOpponent::stopPlayerWin(char playerSymbol) {
    for (int row = 0; row < 3; row++) {
        if (board.getCell(row, 0) == playerSymbol && board.getCell(row, 1) == playerSymbol && board.isValidMove(row, 2)) {
            board.makeMove(row, 2, symbol);
            return true;
        }
        if (board.getCell(row, 1) == playerSymbol && board.getCell(row, 2) == playerSymbol && board.isValidMove(row, 0)) {
            board.makeMove(row, 0, symbol);
            return true;
        }
        if (board.getCell(row, 0) == playerSymbol && board.getCell(row, 2) == playerSymbol && board.isValidMove(row, 1)) {
            board.makeMove(row, 1, symbol);
            return true;
        }
    }

    for (int col = 0; col < 3; col++) {
        if (board.getCell(0, col) == playerSymbol && board.getCell(1, col) == playerSymbol && board.isValidMove(2, col)) {
            board.makeMove(2, col, symbol);
            return true;
        }
        if (board.getCell(1, col) == playerSymbol && board.getCell(2, col) == playerSymbol && board.isValidMove(0, col)) {
            board.makeMove(0, col, symbol);
            return true;
        }
        if (board.getCell(0, col) == playerSymbol && board.getCell(2, col) == playerSymbol && board.isValidMove(1, col)) {
            board.makeMove(1, col, symbol);
            return true;
        }
    }

    if (board.getCell(0, 0) == playerSymbol && board.getCell(1, 1) == playerSymbol && board.isValidMove(2, 2)) {
        board.makeMove(2, 2, symbol);
        return true;
    }
    if (board.getCell(1, 1) == playerSymbol && board.getCell(2, 2) == playerSymbol && board.isValidMove(0, 0)) {
        board.makeMove(0, 0, symbol);
        return true;
    }
    if (board.getCell(0, 0) == playerSymbol && board.getCell(2, 2) == playerSymbol && board.isValidMove(1, 1)) {
        board.makeMove(1, 1, symbol);
        return true;
    }
    if (board.getCell(0, 2) == playerSymbol && board.getCell(1, 1) == playerSymbol && board.isValidMove(2, 0)) {
        board.makeMove(2, 0, symbol);
        return true;
    }
    if (board.getCell(1, 1) == playerSymbol && board.getCell(2, 0) == playerSymbol && board.isValidMove(0, 2)) {
        board.makeMove(0, 2, symbol);
        return true;
    }
    if (board.getCell(0, 2) == playerSymbol && board.getCell(2, 0) == playerSymbol && board.isValidMove(1, 1)) {
        board.makeMove(1, 1, symbol);
        return true;
    }

    return false;
}

bool ComputerOpponent::normalMove(char moveSymbol) {
    if (board.isValidMove(1, 1)) {
        board.makeMove(1, 1, moveSymbol);
        return true;
    }

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            if (board.isValidMove(row, col)) {
                board.makeMove(row, col, moveSymbol);
                return true;
            }
        }
    }

    return false;
}