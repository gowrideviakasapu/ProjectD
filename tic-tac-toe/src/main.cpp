#include<iostream>
#include<limits>
#include "board.hpp"
#include "player.hpp"
using namespace std;


int main(){
    cout<< "Let's Play Tic Tac Toe!" << endl;
    Board b;
    Player players[2] = {Player("Player1", 'X'), Player("Player2", 'O')};
    int currentPlayerIndex =0;


    cout<< "Let's play Tic-Tac-Toe Game!"<<endl;
    b.displayBoard();

    while(!b.isFullBoard()){
        int row, col;
        cout<< players[currentPlayerIndex].getPlayerName() <<" : Symbol - " << players[currentPlayerIndex].getSymbol()<<endl;
        while(true){
            cout<< "Enter row (1-3) & col(1-3)" << endl;
            cin >> row >> col;
            row --; col--;
            if(cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout<< "Invalid input enter numbers only!" <<endl;
                continue;
            }
            if(b.isValidMove(row, col)){
                b.makeMove(row, col,  players[currentPlayerIndex].getSymbol());
                break;
            }
            else{
                cout << "Invalid Move! Try again"<<endl;
            }
        }
        b.displayBoard();
        // check for win or draw for each move
        if(b.checkWin( players[currentPlayerIndex].getSymbol())){
            cout <<  players[currentPlayerIndex].getPlayerName()<< " Wins!"<<endl;
            return 0;
        }
        // switch turns
        currentPlayerIndex = (currentPlayerIndex + 1) % 2;
    }
    if(b.isFullBoard()){
        cout << "It's a draw!" <<endl;
    }
}
