// File name: PyramicTicTacToe_RandomPlayer.cpp
// Purpose: implementation file for the PyramicTicTacToe random player.
// Author(s):  Rawan Ehab 
// ID(s):       20220133  
// Section:  S21
//TA : Eng. Rana Abdelrazik
// Date:    8/12/2023
// Version: 1
#include "../include/PyramicTicTacToe_classes.h"
#include <iostream>

using namespace std;

PyramicTicTacToe_RandomPlayer::PyramicTicTacToe_RandomPlayer(char symbol):RandomPlayer(symbol, 3) {
}

void PyramicTicTacToe_RandomPlayer::get_move(int &x, int &y) {
    x = (int) (rand() / (RAND_MAX + 1.0) * 3);
    y = (int) (rand() / (RAND_MAX + 1.0) * 5);
}

PyramicTicTacToe_AIPlayer::PyramicTicTacToe_AIPlayer(char symbol):RandomPlayer(symbol, 3) {
}


void PyramicTicTacToe_AIPlayer::get_move(int &x, int &y) {

}