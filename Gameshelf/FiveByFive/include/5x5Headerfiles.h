#ifndef SRC_5X5HEADERFILES_H
#define SRC_5X5HEADERFILES_H
#endif //SRC_5X5HEADERFILES_H

#include <iostream>
#include <random>
#include <iomanip>
#include <algorithm>
#include "../../Gameboard//include//BoardGame_Classes.hpp"
class Board5x5:public Board{
private:
    Player* players5[2];
public:
    void getPlayers(Player* players[2]);
    Board5x5();
    bool update_board (int x, int y, char symbol) override ;
// Returns true if there is any winner
// either X or O
// Written in a complex way. DO NOT DO LIKE THIS.
    bool is_winner() override;
// Return true if all moves are done and no winner
    bool is_draw() override;
// Display the board and the pieces on it
    void display_board() override;
// Return true if game is over
    bool game_is_over() override;
    char get_board_value(int x, int  y);
    void set_board_value(int & x, int &  y, char mark);
};

//class GameManager5x5:public GameManager{
//public:
//    GameManager5x5(Board* pbtr, Player* playerPtr[2]);
//    void run();
//};
 class RandomPlayer5x5: public RandomPlayer{
 public:
     RandomPlayer5x5 (char symbol);
     // Generate a random move
     void get_move(int& x, int& y) override;

 };
 class AI_Player : public RandomPlayer {
 private:
     Board5x5 board;
 public:
     AI_Player(char symbol);
     void get_move(int& x, int& y) override;
     virtual void get_board(Board* bPtr);
 };



//class GameManager5x5 : public GameManager {
//public:
//    GameManager5x5(Board5x5* bPtr, Player* playerPtr[2]);
//    void run() ;
//};


class GameManager5x5 : public GameManager  {
public:
    GameManager5x5( Board5x5* bPtr, Player* playerPtr[2]);
    void run() ;
};


