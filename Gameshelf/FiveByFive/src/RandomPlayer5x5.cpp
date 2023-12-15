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

