#ifndef COMPUTER_HPP
#define COMPUTER_HPP

#include "board.hpp"

class ComputerOpponent {
private:
    char symbol;
    Board& board;

public:
    ComputerOpponent(char sym, Board& gameBoard);
    char getSymbol() const;
    bool normalMove(char moveSymbol);
    bool stopPlayerWin(char playerSymbol);
};

#endif