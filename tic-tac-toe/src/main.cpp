#include <iostream>
#include <limits>

#include "board.hpp"
#include "computer.hpp"
#include "player.hpp"

using namespace std;

int main() {
    cout << "Let's Play Tic Tac Toe!" << endl;
    Board b;
    b.displayBoard();

    int choice;
    cout << "Select Single Player or Two Player? (1/2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Single Player Mode Selected!" << endl;
        ComputerOpponent computer('O', b);
        Player human("Human", 'X');
        bool humanTurn = true;

        while (!b.isFullBoard()) {
            int row, col;

            if (humanTurn) {
                cout << human.getPlayerName() << " : Symbol - " << human.getSymbol() << endl;
                while (true) {
                    cout << "Enter row (1-3) & col(1-3)" << endl;
                    cin >> row >> col;
                    row--; col--;

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Invalid input enter numbers only!" << endl;
                        continue;
                    }

                    if (b.isValidMove(row, col)) {
                        b.makeMove(row, col, human.getSymbol());
                        break;
                    }

                    cout << "Invalid Move! Try again" << endl;
                }
            } else {
                cout << "Computer's Turn: Symbol - " << computer.getSymbol() << endl;
                if (!computer.stopPlayerWin(human.getSymbol())) {
                    computer.normalMove(computer.getSymbol());
                }
            }

            b.displayBoard();

            if (b.checkWin(human.getSymbol())) {
                cout << human.getPlayerName() << " Wins!" << endl;
                return 0;
            }
            if (b.checkWin(computer.getSymbol())) {
                cout << "Computer Wins!" << endl;
                return 0;
            }
            if (b.isFullBoard()) {
                cout << "It's a draw!" << endl;
                return 0;
            }

            humanTurn = !humanTurn;
        }
    } else if (choice == 2) {
        cout << "Two Player Mode Selected!" << endl;
        Player players[2] = {Player("Player1", 'X'), Player("Player2", 'O')};
        int currentPlayerIndex = 0;

        while (!b.isFullBoard()) {
            int row, col;
            cout << players[currentPlayerIndex].getPlayerName() << " : Symbol - " << players[currentPlayerIndex].getSymbol() << endl;

            while (true) {
                cout << "Enter row (1-3) & col(1-3)" << endl;
                cin >> row >> col;
                row--; col--;

                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input enter numbers only!" << endl;
                    continue;
                }

                if (b.isValidMove(row, col)) {
                    b.makeMove(row, col, players[currentPlayerIndex].getSymbol());
                    break;
                }

                cout << "Invalid Move! Try again" << endl;
            }

            b.displayBoard();

            if (b.checkWin(players[currentPlayerIndex].getSymbol())) {
                cout << players[currentPlayerIndex].getPlayerName() << " Wins!" << endl;
                return 0;
            }
            if (b.isFullBoard()) {
                cout << "It's a draw!" << endl;
                return 0;
            }

            currentPlayerIndex = (currentPlayerIndex + 1) % 2;
        }
    } else {
        cout << "Invalid choice! Exiting the game." << endl;
    }

    return 0;
}
