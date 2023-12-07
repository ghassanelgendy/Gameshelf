#include "../include/Gameshelf_Classes.hpp"

#include <iostream>

 void Game::init_ConnectFour() {
 startChoice:
     char choice;
     Player* players[2];
     players[0] = new Player(1, 'x');

     cout << "\n\t\t\t\t\t===[Welcome to FCAI Connect Four Game]===\n\n";
     cout << "Please choose your opponent:\n" << "  1. Multiplayer\n  2. Dumb Computer\n  3. Highly sophisticated A.I\n";
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
         //players[1] = new AI_Player(curbPtr);
         break;
     default:
         cout << "\nAn error has occured, try again!\n";
         goto startChoice;
     }
 startOfGame:
     GameManager connectFour(new ConnectFourBoard(), players);
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
     system("pause");
 }
 void Game::init_3x3_XO(){
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
         players[1] = new RandomPlayer('o', 3);

     GameManager x_o_game(new X_O_Board(), players);
     x_o_game.run();
     system("pause");
 }
 void Game::init_5x5_XO(){
 }
 void Game::init_pyramic_XO(){
 }

