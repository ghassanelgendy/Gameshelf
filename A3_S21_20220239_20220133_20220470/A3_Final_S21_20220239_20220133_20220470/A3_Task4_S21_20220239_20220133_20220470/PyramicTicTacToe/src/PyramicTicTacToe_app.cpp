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
int choice;
    Player* players[2];
    players[0] = new Player (1, 'x');
    cout << "Press 1 if you want to play with computer: ";
    cin >> choice;
    if (choice != 1)
        players[1] = new Player (2, 'o');
    else

        players[1] = new PyramicTicTacToe_RandomPlayer ('o');

    GameManager pyramic_tic_tac_toe_game (new PyramicTicTacToe_Board(), players);
    pyramic_tic_tac_toe_game.run();
    system ("pause");


    return 0;

}