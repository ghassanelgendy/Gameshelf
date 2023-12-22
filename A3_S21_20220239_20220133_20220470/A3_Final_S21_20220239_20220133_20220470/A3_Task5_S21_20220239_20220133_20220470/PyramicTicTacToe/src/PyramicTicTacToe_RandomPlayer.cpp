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
    x = rand() % 3;
    y = rand() % 5;
}

PyramicTicTacToe_AIPlayer::PyramicTicTacToe_AIPlayer(char symbol):RandomPlayer(symbol, 3) {
    name = "AI player";
}


void PyramicTicTacToe_AIPlayer::get_move( int& x, int& y) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2 * i + 1; j++) {
            if (pyramic_board.get_board_value(i, j) == 0) {
                pyramic_board.set_board_value(i, j, 'O');
                if (pyramic_board.is_winner()) {
                    x = i;
                    y = j;
                    pyramic_board.set_board_value(i, j, 0);
                    return;
                }
                pyramic_board.set_board_value(i, j, 0);
            }
        }
    }


    char  opponent_symbol = 'X';

    //law mesh hnksb yb2a wala howa hayksb
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2 * i + 1; j++) {
            if (pyramic_board.get_board_value(i, j) == 0) {
                pyramic_board.set_board_value(i, j, opponent_symbol);
                if (pyramic_board.is_winner()) {
                    x = i;
                    y = j;
                    pyramic_board.set_board_value(i, j, 0);
                    return;
               
                }
                pyramic_board.set_board_value(i, j, 0);
            }
        }
    }

   
        x = rand() % 3;
        y = rand() % (2 * x + 1);
        return;
}

void PyramicTicTacToe_AIPlayer::get_board(Board* bPtr)
{
    pyramic_board = *((PyramicTicTacToe_Board*)bPtr);
}

