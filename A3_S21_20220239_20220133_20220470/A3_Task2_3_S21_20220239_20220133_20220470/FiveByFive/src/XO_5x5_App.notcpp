#include <iostream>
#include <random>
#include <iomanip>
#include <algorithm>
#include "../include/5x5Headerfiles.h"

int main(){
chooseGameLabel:
    cout << "\n\t\t\t\t\t===[Welcome to 5x5 XO in FCAI Gameshelf]===\n\n";
    char choice;
    Player* players[2];
    players[0] = new Player(1, 'x');
    cout << "Welcome to FCAI X-O Game. :)\n";
    cout << "Press 1 if you want to play with computer: ";
    cin >> choice;
    if (choice != '1')
        players[1] = new Player(2, 'o');
    else {
        players[1] = new RandomPlayer5x5('o');
    }
    Board5x5* elboard = new Board5x5;
    GameManager5x5 Game(elboard, players);
    elboard->getPlayers(players);
    Game.run();
    system("pause");
}