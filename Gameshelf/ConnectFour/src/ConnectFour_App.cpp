// Class definition for ConnectFour class
// Author:       Mohamed Elramly
// Updated by :  Ghassan Elgendy
// Date:    10/12/2023
// Version: 1.1

#include <iostream>
#include"../include/ConnectFour_Classes.hpp"

using namespace std;

int main() {
    int choice;
    Player* players[2];
    players[0] = new Player(1, 'x');

    cout << "Welcome to FCAI X-O Game. :)\n";
    cout << "Press 1 if you want to play with computer: ";
    cin >> choice;
    if (choice != 1)
        players[1] = new Player(2, 'o');
    else
        //Player pointer points to child
        players[1] = new RandomPlayer ('o', 6);

    GameManager x_o_game (new ConnectFourBoard(), players);
    x_o_game.run();
    system ("pause");
}
