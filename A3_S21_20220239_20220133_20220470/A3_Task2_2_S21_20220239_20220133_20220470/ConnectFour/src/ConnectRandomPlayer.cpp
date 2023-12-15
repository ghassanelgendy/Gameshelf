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

// Generate a random move
ConnectRandomPlayer::ConnectRandomPlayer(char sym, int dimension): RandomPlayer(sym,dimension){

}
void ConnectRandomPlayer::get_move (int& x, int& y) {
    x = (rand() % 7);
    y = (rand() % 6);
}
