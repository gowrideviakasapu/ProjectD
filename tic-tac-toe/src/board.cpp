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
    if(row>=0 && row<3 && col>=0 && col<3 && grid[row][col] == ' '){
        return true;
    }
    return false;
}

bool Board::isFullBoard(){
    return filledCells == 9;
}

bool Board::checkRow(char sym){
    for(int i =0; i<3; i++){
        if(grid[i][0] == sym && grid[i][1] == sym && grid[i][2] == sym){
            return true;
        }
    }
    return false;
}

bool Board::checkColumn(char sym){
    for(int i =0; i<3; i++){
        if(grid[0][i] == sym && grid[1][i] == sym && grid[2][i] == sym){
            return true;
        }
    }
    return false;
}

bool Board::checkDiagonal(char sym){
    // check top-left to the bottom-right diagonal
    if(grid[0][0] == sym && grid[1][1] == sym && grid[2][2]== sym){
        return true;
    }
    // check top-right to the bottom-left diagonal
    if(grid[0][2] == sym && grid[1][1] == sym && grid[2][0] == sym){
        return true;
    }
    return false;
}

bool Board::checkWin(char sym){
    if(checkRow(sym) || checkColumn(sym) || checkDiagonal(sym)){
        return true;
    }
    return false;
}

bool Board::checkDraw(char sym1, char sym2){
    return isFullBoard() && !checkWin(sym1) && !checkWin(sym2);
}