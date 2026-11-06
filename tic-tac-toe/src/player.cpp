#include "player.hpp"
#include<iostream>
#include<string>
using namespace std;


Player::Player(string name="Player X", char sym='X'){
    playerName = name;
    symbol = sym;
}

string Player::getPlayerName(){
    return playerName;
}

char Player::getSymbol(){
    return symbol;
}