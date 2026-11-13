#include "player.hpp"
#include<iostream>
#include<string>
using namespace std;


Player::Player(string name, char sym){
    playerName = name;
    symbol = sym;
}

string Player::getPlayerName() const{
    return playerName;
}

char Player::getSymbol() const{
    return symbol;
}
