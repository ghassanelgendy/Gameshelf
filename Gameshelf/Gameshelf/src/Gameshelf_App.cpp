// Class definition for XO_App class
// Author:  Mohammad El-Ramly
// Date:    10/10/2022
// Version: 1

#include <iostream>
#include "../include/Gameshelf_Classes.hpp"

using namespace std;

int main() {
    char gameChoice;
    cout << "\n\t\t\t\t\t===[Welcome to FCAI Gameshelf]===\n\n";
    cout << "Please choose a game:\n" << "  1. 3x3 X/O\n  2. 5x5 X/O \n  3. Pyramic X/O\n  4. Connect Four\n";
    cin >> gameChoice;

    switch (gameChoice) {
    case('1'):
        Game::init_3x3_XO();
        break;
    case('2'):
        Game::init_5x5_XO();
        break;
    case('3'):
        Game::init_pyramic_XO();
        break;
    case('4'):
        Game::init_ConnectFour();
        break;
    default:
        break;
    }
    return 0;
}
