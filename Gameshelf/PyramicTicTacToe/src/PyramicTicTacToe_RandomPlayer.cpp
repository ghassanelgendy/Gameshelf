#include "../include/PyramicTicTacToe_classes.h"
#include <iostream>

using namespace std;

PyramicTicTacToe_RandomPlayer::PyramicTicTacToe_RandomPlayer(char symbol):RandomPlayer(symbol, 3) {
}

void PyramicTicTacToe_RandomPlayer::get_move(int &x, int &y) {
    x = (int) (rand() / (RAND_MAX + 1.0) * 3);
    y = (int) (rand() / (RAND_MAX + 1.0) * 5);
}
