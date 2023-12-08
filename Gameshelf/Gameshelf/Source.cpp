// File name: Source.cpp
// Purpose: Main file for the project containing the menu and each game initialization.
// Author(s): Ghassan Elgendy - Rawan Ehab - Jana mohamed
// ID(s):     20220239        - 20220133   -  202220470
// Section:  S21
//TA : Eng. Rana Abdelrazik
// Date:    8/12/2023
// Version: 1.1

#include <iostream>
#include "../Gameboard/include/BoardGame_Classes.hpp"
#include "../ConnectFour/include/ConnectFour_Classes.hpp"
#include "../PyramicTicTacToe/include/PyramicTicTacToe_classes.h"

// #include "../Gameboard/src/Player.cpp"
// #include "../Gameboard/src/GameManager.cpp"
// #include "../Gameboard/src/X_O_Board.cpp"
// #include "../Gameboard/src/RandomPlayer.cpp"
// #include "../ConnectFour/src/ConnectFourBoard.cpp"
// #include "../ConnectFour/src/ConnectRandomPlayer.cpp"
// #include "../PyramicTicTacToe/src/PyramicTicTacToe_board.cpp"
// #include "../PyramicTicTacToe/src/PyramicTicTacToe_RandomPlayer.cpp"


using namespace std;

void static init3x3_XO(char& choice){
        Player * players[2];
        players[0] = new Player(1, 'x');

        cout << "Welcome to FCAI X-O Game. :)\n";
        cout << "Press 1 if you want to play with computer: ";
        cin >> choice;
        if (choice != '1')
            players[1] = new Player(2, 'o');
        else
            //  Player pointer points to child
            players[1] = new RandomPlayer('o', 3);
        GameManager x_o_game(new X_O_Board(), players);
        x_o_game.run();
    }
void static initConnectFour(char &choice) {
startChoice:
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
        //players[1] = new AI_Player();
        break;
    default:
        cout << "\nAn error has occured, try again!\n";
        goto startChoice;
    }
startConnectFourLabel:
    Board* curbPtr = new ConnectFourBoard();
    GameManager connectFour(curbPtr, players);
    connectFour.run();
    cout << "Want another round? Y/N \n";
    char rematch;
    cin >> rematch;
    if (rematch == 'Y') {
        cout << "Same players? Y/N\n";
        cin >> rematch;
        if (tolower(rematch) == 'y') {
            goto startConnectFourLabel;
        }
        goto startChoice;
    }
}
 void static initPyramicTicTacToe(char& choice) {
    Player* players[2];
    players[0] = new Player(1, 'x');
    startChoice:
    cout << "enter 1 for multi-player mode or enter 2 to play against a computer: ";
    cin >> choice;
    int comp_choice;
    if (choice == '1')
    {
        players[1] = new Player(2, 'o');
    }
    else if (choice == '2')
    { 
        compchoicestart:
        cout << "\nenter 1 to play against a dumb computer or enter 2 to play against an AI: ";
        cin >> comp_choice;
        if (comp_choice == 1)
            players[1] = new PyramicTicTacToe_RandomPlayer('o');
        else if (comp_choice == 2)
            //players[1] = new PyramicTicTacToe_AIPlayer('o');
            cout << "AI not implemented yet\n";
        else
        {
            cout << "Please choose a valid option\n";
            goto compchoicestart;
        }
        
    }
    else
    {
        cout << "Please choose a valid option\n";
        goto startChoice;

    }
    
    startpyramicgame:

    Board* boardPtr = new PyramicTicTacToe_Board();
    system("cls");
    GameManager pyramic_tic_tac_toe_game(boardPtr, players);
    pyramic_tic_tac_toe_game.run();

    cout << "Want to play again ? Y/N \n";
    char rematch;
    cin >> rematch;
    if (tolower(rematch) == 'y') {
       goto startpyramicgame;
    }
}
int main() {
    chooseGameLabel:
    char gameChoice;
    cout << "\n\t\t\t\t\t===[Welcome to FCAI Gameshelf]===\n\n";
    cout << "Please choose a game:\n" << "  1. 3x3 X/O\n  2. 5x5 X/O \n  3. Pyramic X/O\n  4. Connect Four\n";
    cin>>gameChoice;
    char choice;
    switch (gameChoice) {
    case('1'):
        init3x3_XO(choice);
        break;

    case('2'):
        break;

    case('3'):
        initPyramicTicTacToe(choice);
        break;
    case('4'):
        initConnectFour(choice);
        break;
    default:
        cout << "Please choose a valid option\n";
        goto chooseGameLabel;
        break;
    }
    cout << "Want to try another game? Y/N\n";
    cin >> choice;
    if (tolower(choice )== 'y') {
        goto chooseGameLabel;
    }
    system("pause");
}
