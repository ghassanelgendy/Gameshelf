#include"../include//ConnectFour_Classes.hpp"
#include <iostream>
using namespace std;


AiPlayer::AiPlayer(char symbol) : Player(symbol)
{
	name = "A.I";
}

void AiPlayer::get_move(int& x, int& y)
{
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            if (cBoard.get_board_value(i, j) == 0) {
                cBoard.set_board_value(i, j, 'O');
                if (cBoard.is_winner()) {
                    x = i;
                    y = j;
                    cBoard.set_board_value(i, j, 0);
                    return;
                }
                cBoard.set_board_value(i, j, 0);
            }
        }
    }

    char  opponent_symbol = 'X';

    //law mesh hnksb yb2a wala howa hayksb
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            if (cBoard.get_board_value(i, j) == 0) {
                cBoard.set_board_value(i, j, opponent_symbol);
                if (cBoard.is_winner()) {
                    x = i;
                    y = j;
                    cBoard.set_board_value(i, j, 0);
                    return;

                }
                cBoard.set_board_value(i, j, 0);
            }
        }
    }

    x = (rand() % 7);
    y = (rand() % 6);
}


void AiPlayer::get_board(Board* bPtr)
{
	cBoard = *((ConnectFourBoard*)bPtr);
}