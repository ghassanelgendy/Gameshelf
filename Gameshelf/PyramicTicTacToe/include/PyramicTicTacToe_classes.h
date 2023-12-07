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

};

class PyramicTicTacToe_RandomPlayer:public RandomPlayer {
public:
    explicit PyramicTicTacToe_RandomPlayer(char symbol);
    void get_move(int& x, int& y) override;
};

#endif //CS213_A3_PYRAMICTICTACTOE_CLASSES_H
