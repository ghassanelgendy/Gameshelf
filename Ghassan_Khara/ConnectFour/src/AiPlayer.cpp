#include"../include/ConnectFour_Classes.hpp"
#include <iostream>
using namespace std;


AiPlayer::AiPlayer(char symbol) : Player(symbol)
{
	name = "A.I";
}

void AiPlayer::get_move(int& x, int& y)
{
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7 ; j++) {
            if (cBoard.get_board_value(i, j) == 0) {
                if (cBoard.is_winner()) {
                    x = i;
                    y = j;
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
                    cBoard.set_board_value(i, j, 0);
                    x = i;
                    y = j;
                    return;
                }
                cBoard.set_board_value(i, j, 0);
            }
        }
    }
    cout << "Opssy, RANDOMIZE\n";
    x = (int)(rand() / (RAND_MAX + 1.0) * 7);
    y = (int)(rand() / (RAND_MAX + 1.0) * 6);
}


void AiPlayer::get_board(Board* bPtr)
{
	cBoard = *((ConnectFourBoard*)bPtr);
}