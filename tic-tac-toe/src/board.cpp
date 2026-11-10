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

void  Board::makeMove(int row, int col, char sym){
    if(isValidMove(row, col)){
        grid[row][col] = sym;
        filledCells++;
    }
}

bool Board::isValidMove(int row, int col){
    if(row>=0 && row<3 && col>=0 && col<3 && grid[row][col] = ' '){
        return true;
    }
    return false;
}

bool Board::isFullBoard(){
    retrun filledCells == 9;
}

bool Board::checkRow(char sym){
    for(int i =0; i<3; i++){
        if(grid[i][0] == sym && grid[i][1] == sym && grid[i][2] == sym){
            return true;
        }
    }
}

bool Board::checkColumn(char sym){
    for(int i =0; i<3; i++){
        if(grid[0][i] == sym && grid[1][i] == sym && grid[2][i] == sym){
            return true;
        }
    }
}

bool Board::checkDiagonal(char sym){
    if(grid[0][0] == sym && grid[1][1] == sym && grid[2][2]== sym){
        retrun true;
    }
}

bool board::checkWin(char sym){
    if(checkRow() || checkColumn() || checkDiagonal()){
        return true;
    }
    return false
}