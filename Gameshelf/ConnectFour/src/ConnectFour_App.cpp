// Class definition for ConnectFour class
// Author:       Mohamed Elramly
// Updated by :  Ghassan Elgendy
// Date:    10/12/2023
// Version: 1.1

#include <iostream>
#include"../include/ConnectFour_Classes.hpp"

using namespace std;

int main() {
    startChoice:
    char choice;
    Player* players[2];
    players[0] = new Player(1, 'x');

    cout << "\n===[Welcome to FCAI Connect Four Game]===\n";
    cout << "Please choose your opponent:\n" << "1. Multiplayer\n2. Dumb Computer\n3. Highly sophisticated A.I\n";
    cin >> choice;
    switch (choice)
    {
    case('1'):
        players[1] = new Player(2, 'o');
        break;
    case('2'):
        players[1] = new RandomPlayer('o', 6);
        break;
    case('3'):
        players[1] = new AiPlayer('O');
        break;
    default:
        cout << "\nAn error has occured, try again!\n";
        goto startChoice;
    }
startOfGame:
    Board* curbPtr = new ConnectFourBoard();
    GameManager connectFour (curbPtr, players);
    connectFour.run();
    cout << "Want another Game? Y/N \n";
    char rematch;
    cin >> rematch;
    if (rematch == 'Y') {
        cout << "Same players? Y/N\n";
        cin >> rematch;
        if (rematch == 'Y') {
            goto startOfGame;
        }
        goto startChoice;
    }
    system ("pause");
}
