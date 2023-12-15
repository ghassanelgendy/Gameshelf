// File name: PyramicTicTacToe_app.cpp
// Purpose: Main file for the PyramicTicTacToe game .
// Author(s):  Rawan Ehab 
// ID(s):       20220133  
// Section:  S21
//TA : Eng. Rana Abdelrazik
// Date:    8/12/2023
// Version: 1

#include "../include/PyramicTicTacToe_classes.h"
 #include "PyramicTicTacToe_board.cpp"
 #include "../../Gameboard//src//Player.cpp"
 #include"PyramicTicTacToe_RandomPlayer.cpp"
 #include "../../Gameboard//src//X_O_Board.cpp"
 #include "../../Gameboard//src//RandomPlayer.cpp"
 #include "../../Gameboard//src//GameManager.cpp"
#include <iostream>
using namespace std;

int main(){
char choice;
    Player* players[2];
    players[0] = new Player (1, 'x');
    cout << "enter 1 for multi-player mode or enter 2 to play against a computer: ";
    cin >> choice;
    int comp_choice;
    startChoice:
    if (choice == '1')
    {
        players[1] = new Player(2, 'o');
    }
    else if (choice == '2')
    {
        compchoicestart:
        cout << "\nenter 1 to play against a dumb computer or enter 2 to play against an AI: ";
        cin >> comp_choice;
        if (comp_choice == 1)
            players[1] = new PyramicTicTacToe_RandomPlayer('o');
        else if (comp_choice == 2)
            players[1] = new PyramicTicTacToe_AIPlayer('o');
        else
        {
            cout << "Please choose a valid option\n";
            goto compchoicestart;
        }

    }
    else
    {
        cout << "Please choose a valid option\n";
        goto startChoice;

    }

    startpyramicgame:

    Board* boardPtr = new PyramicTicTacToe_Board();
    system("cls");
    GameManager pyramic_tic_tac_toe_game(boardPtr, players);
    pyramic_tic_tac_toe_game.run();

    cout << "Want to play again ? Y/N \n";
    char rematch;
    cin >> rematch;
    if (tolower(rematch) == 'y') {
        goto startpyramicgame;
    }

    return 0;

}