// File name: PyramicTicTacToe_classes.h
// Purpose: Header file for the PyramicTicTacToe game containing the classes and their functions.
// Author(s):  Rawan Ehab 
// ID(s):       20220133  
// Section:  S21
//TA : Eng. Rana Abdelrazik
// Date:    8/12/2023
// Version: 1

#include "../../Gameboard//include//BoardGame_Classes.hpp"


#ifndef CS213_A3_PYRAMICTICTACTOE_CLASSES_H
#define CS213_A3_PYRAMICTICTACTOE_CLASSES_H

class PyramicTicTacToe_Board:public Board {
public:
    PyramicTicTacToe_Board ();
    bool update_board (int x, int y, char mark) override;
    void display_board() override;
     bool is_winner() override;
    bool is_draw() override;
    bool game_is_over() override;
    char get_board_value(int& x, int& y);
    void set_board_value(int& x, int& y, char mark);

};

class PyramicTicTacToe_RandomPlayer:public RandomPlayer {
public:
    PyramicTicTacToe_RandomPlayer(char symbol);
    void get_move(int& x, int& y) override;
};

class PyramicTicTacToe_AIPlayer:public RandomPlayer {
public:
   PyramicTicTacToe_AIPlayer(char symbol);
    void get_move(int& x, int& y) override;
    virtual void get_board(Board* bPtr);

private:
    PyramicTicTacToe_Board pyramic_board;
};

#endif //CS213_A3_PYRAMICTICTACTOE_CLASSES_H
