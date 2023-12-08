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
    PyramicTicTacToe_RandomPlayer(char symbol);
    void get_move(int& x, int& y) override;
};

class PyramicTicTacToe_AIPlayer:public RandomPlayer {
public:
   PyramicTicTacToe_AIPlayer(char symbol);
    void get_move(int& x, int& y) override;
};

void static initPyramicTicTacToe() {
    PyramicTicTacToe_Board();
    PyramicTicTacToe_RandomPlayer('o');
    PyramicTicTacToe_AIPlayer('o');
}

#endif //CS213_A3_PYRAMICTICTACTOE_CLASSES_H
