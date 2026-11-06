#include "board.hpp"
#include<iostream>
using  namespace std;

Board::Board(){
    for(int i =0; i<3; i++){
        for(int j = 0; j<3; j++){
            grid[i][j] = ' ';
        }
    }
    filledCells = 0;
}

void Board::displayBoard(){
    cout<< "- - - - - -"<<endl;
    for(int i =0; i<3; i++){
        cout<< "| ";
        for(int j =0; j<3; j++){
            cout<< grid[i][j]<<"| ";
        }
        cout<<endl;
        cout<< "- - - - - -"<<endl;
    }
}