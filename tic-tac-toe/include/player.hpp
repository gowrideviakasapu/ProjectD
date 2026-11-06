#include<iostream>
#include<string>
using namespace std;

class Player{
    private:
        string playerName;
        char symbol;

    public:
        Player(string name, char sym);
        string getPlayerName();
        char getSymbol();
};