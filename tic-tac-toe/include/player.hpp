#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

class Player {
private:
    std::string playerName;
    char symbol;

public:
    Player(std::string name = "Player X", char sym = 'X');
    std::string getPlayerName() const;
    char getSymbol() const;
};

#endif
