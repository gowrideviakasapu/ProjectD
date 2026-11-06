#include<iostream>
#include "board.hpp"
#include "player.hpp"
using namespace std;

int main(){
    Board b;
    Player player1("Player1", 'X');
    Player player2("Player2", 'O');
    b.displayBoard();
}