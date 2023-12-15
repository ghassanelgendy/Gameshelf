// Class definition for ConnectFour game classes
// Author:       Mohamed Elramly
// Updated by :  Ghassan Elgendy
// Date:    06/12/2023
// Version: 1.1
#ifndef _ConnectFour_Classes_H
#define _ConnectFour_Classes_H
#include "../../Gameboard//include//BoardGame_Classes.hpp"

using namespace std;

class ConnectFourBoard : public Board{ 
public:
    ConnectFourBoard();
    bool update_board (int x, int y, char mark);
    void display_board();
    bool is_winner();
    bool is_draw();
    bool game_is_over();
    char get_board_value(int& x, int& y);
    void set_board_value(int &x, int &y, char mark);
};

class ConnectRandomPlayer : public RandomPlayer{
    public:
    ConnectRandomPlayer(char sym, int dimension);
    void get_move(int& x, int& y);
};

class AiPlayer : public Player
{
public:
    AiPlayer();
    AiPlayer(char symbol); // Needed for computer players
    virtual void get_move(int& x, int& y);
    virtual void get_board(Board* bPtr);
    ~AiPlayer();

private:
    ConnectFourBoard cBoard;
};

#endif