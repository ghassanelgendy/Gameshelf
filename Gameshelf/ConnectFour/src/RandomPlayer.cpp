// Class definition for ConnectFour class
// Which is a computer player playing randomly
// Author:       Mohamed Elramly
// Updated by :  Ghassan Elgendy
// Date:    10/12/2023
// Version: 1.1
#include<iostream>
#include<random>
#include<iomanip>
#include<algorithm>
#include"../include/ConnectFour_Classes.hpp"
using namespace std;

// Set player symbol and name as Random Computer Player
RandomPlayer::RandomPlayer (char symbol, int dimension):Player(symbol)
{
    this->dimension = dimension;
    this->name = "Random Computer Player";
    cout << "My names is " << name << endl;
}

// Generate a random move
void RandomPlayer::get_move (int& x, int& y) {
    x = (int) (rand()/(RAND_MAX + 1.0) * dimension);
    y = (int) (rand()/(RAND_MAX + 1.0) * (dimension+1));
}
