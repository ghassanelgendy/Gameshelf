// Class definition for ConnectFour game classes
// Author:       Mohamed Elramly
// Updated by :  Ghassan Elgendy
// Date:    06/12/2023
// Version: 1.1
#ifndef _ConnectFour_Classes_H
#define _ConnectFour_Classes_H
#include "../../Gameboard//include//BoardGame_Classes.hpp"

using namespace std;

class ConnectFourBoard:public Board{ 
public:
    ConnectFourBoard();
    bool update_board (int x, int y, char mark);
    void display_board();
    bool is_winner();
    bool is_draw();
    bool game_is_over();
    char getCell(short& x, short& y);
};
class AI_Player : public Player
{
public:
    pair<int,int> getBestMove();
    AI_Player(ConnectFourBoard* brdPtr);
private:
    pair<int, int>move; //contains x y axises
    short score;
    ConnectFourBoard* AICopyOfBoard;
};
#endif