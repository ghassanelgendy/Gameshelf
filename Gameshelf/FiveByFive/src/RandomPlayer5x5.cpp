#include <iostream>
#include "../include/5x5Headerfiles.h"
using namespace std;
RandomPlayer5x5::RandomPlayer5x5(char symbol):RandomPlayer(symbol, 5) {
    //this->symbol = symbol;
    //this->dimension = 5;
    //this->name = "Random Computer Player";
    //cout << "My names is " << name << endl;
}
void RandomPlayer5x5::get_move (int& x, int& y) {
    x = (int) (rand()/(RAND_MAX + 1.0) * 5);
    y = (int) (rand()/(RAND_MAX + 1.0) * 5);
}
AI_Player::AI_Player(char symbol) :RandomPlayer(symbol,5) {
    name = "AI player";
}

void AI_Player::get_board(Board* bPtr)
{
    board = *((Board5x5*)bPtr);
}
void AI_Player::get_move(int& x, int& y) {
    // Chck rows (yeksab howa)
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            if (board.get_board_value(i, j) == 0) {
                board.set_board_value(i, j, 'O');
                if (board.get_board_value(i,j) == board.get_board_value(i, j+1) && board.get_board_value(i, j + 1) == board.get_board_value(i , j + 2) && board.get_board_value(i, j) != 0 &&( board.get_board_value(i, j) == 'O')) {
                    x = i;
                    y = j;
                    board.set_board_value(i, j, 0);
                    return;
                }
                board.set_board_value(i, j, 0);
            }
        }
    }
    //check cols (yeksab howa)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (board.get_board_value(i, j) == 0) {
                board.set_board_value(i, j, 'O');
                if (board.get_board_value(i, j) == board.get_board_value(i+1, j) && board.get_board_value(i + 1, j) == board.get_board_value(i + 2, j) && board.get_board_value(i, j) != 0 && (board.get_board_value(i, j) == 'O')) {
                    x = i;
                    y = j;
                    board.set_board_value(i, j, 0);
                    return;
                }
                board.set_board_value(i, j, 0);
            }
        }
    }

    //check diagonls  (yeksab howa)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board.get_board_value(i, j) == 0) {
                board.set_board_value(i, j, 'O');
                if (board.get_board_value(i, j) == board.get_board_value(i + 1, j+1) && board.get_board_value(i + 1, j+1) == board.get_board_value(i + 2, j+2) && board.get_board_value(i, j) != 0 && (board.get_board_value(i, j) == 'O')) {
                    x = i;
                    y = j;
                    board.set_board_value(i, j, 0);
                    return;
                }
                board.set_board_value(i, j, 0);
            }
        }
    }
    //check inverse diagonls  (yeksab howa)
    for (int i = 0; i < 3; i++) {
        for (int j = 2; j < 5; j++) {
            if (board.get_board_value(i, j) == 0) {
                board.set_board_value(i, j, 'O');
                if (board.get_board_value(i, j) == board.get_board_value(i + 1, j -1) && board.get_board_value(i + 1, j - 1) == board.get_board_value(i + 2, j -2) && board.get_board_value(i, j) != 0 && (board.get_board_value(i, j) == 'O')) {
                    x = i;
                    y = j;
                    board.set_board_value(i, j, 0);
                    return;
                }
                board.set_board_value(i, j, 0);
            }
        }
    }
               //////////////////////////////////////////////////
               
    // Chck rows (ye2fel 3alaya)
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            if (board.get_board_value(i, j) == 0) {
                board.set_board_value(i, j, 'X');
                if (board.get_board_value(i, j) == board.get_board_value(i, j + 1) && board.get_board_value(i, j + 1) == board.get_board_value(i, j + 2) && board.get_board_value(i, j) != 0 && (board.get_board_value(i, j) == 'X')) {
                    x = i;
                    y = j;
                    board.set_board_value(i, j, 0);
                    return;
                }
                board.set_board_value(i, j, 0);
            }
        }
    }
    //check cols (yeksab howa)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (board.get_board_value(i, j) == 0) {
                board.set_board_value(i, j, 'X');
                if (board.get_board_value(i, j) == board.get_board_value(i + 1, j) && board.get_board_value(i + 1, j) == board.get_board_value(i + 2, j) && board.get_board_value(i, j) != 0 && (board.get_board_value(i, j) == 'X')) {
                    x = i;
                    y = j;
                    board.set_board_value(i, j, 0);
                    return;
                }
                board.set_board_value(i, j, 0);
            }
        }
    }
    //check diagonls  (yeksab howa)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board.get_board_value(i, j) == 0) {
                board.set_board_value(i, j, 'X');
                if (board.get_board_value(i, j) == board.get_board_value(i + 1, j + 1) && board.get_board_value(i + 1, j + 1) == board.get_board_value(i + 2, j + 2) && board.get_board_value(i, j) != 0 && (board.get_board_value(i, j) == 'X')) {
                    x = i;
                    y = j;
                    board.set_board_value(i, j, 0);
                    return;
                }
                board.set_board_value(i, j, 0);
            }
        }
    }
    //check inverse diagonls  (yeksab howa)
    for (int i = 0; i < 3; i++) {
        for (int j = 2; j < 5; j++) {
            if (board.get_board_value(i, j) == 0) {
                board.set_board_value(i, j, 'X');
                if (board.get_board_value(i, j) == board.get_board_value(i + 1, j - 1) && board.get_board_value(i + 1, j - 1) == board.get_board_value(i + 2, j - 2) && board.get_board_value(i, j) != 0 && (board.get_board_value(i, j) == 'X')) {
                    x = i;
                    y = j;
                    board.set_board_value(i, j, 0);
                    return;
                }
                board.set_board_value(i, j, 0);
            }
        }
    }
    srand(time(0));
    x = rand() % 5;
    y = rand() % 5;
    return;
}
