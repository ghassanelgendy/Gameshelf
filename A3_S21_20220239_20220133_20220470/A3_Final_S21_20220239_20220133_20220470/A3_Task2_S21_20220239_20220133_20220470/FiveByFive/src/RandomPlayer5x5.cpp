#include <iostream>
#include "../include/5x5Headerfiles.h"
using namespace std;
RandomPlayer5x5::RandomPlayer5x5(char symbol):RandomPlayer(symbol, 5) {
 
}
void RandomPlayer5x5::get_move (int& x, int& y) {
    x = (int) (rand()/(RAND_MAX + 1.0) * 5);
    y = (int) (rand()/(RAND_MAX + 1.0) * 5);
}

