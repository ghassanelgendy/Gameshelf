#include <iostream>
#include <iomanip>
#include <algorithm>
#include "../include/5x5Headerfiles.h"
#include "../../Gameboard//include//BoardGame_Classes.hpp"

GameManager5x5::GameManager5x5(Board5x5* bPtr, Player* playerPtr[2]) : GameManager(bPtr, playerPtr) {

}

void GameManager5x5::run() {
    int x, y;

    boardPtr->display_board();

    while (!boardPtr->game_is_over()) {
        for (int i : {0, 1}) {
            players[i]->get_board(boardPtr);
            players[i]->get_move(x, y);
            while (!boardPtr->update_board(x, y, players[i]->get_symbol())) {
                players[i]->get_move(x, y);
            }
            system("cls");
            cout << "\t\t\t\t\t===[" << players[0]->to_string() << " (" << players[0]->get_symbol() << ')' << " VS " << players[1]->to_string() << " (" << players[1]->get_symbol() << ")]===\n\n" << endl;
            boardPtr->display_board();
            boardPtr->is_winner();
            boardPtr->is_draw();
            //if (boardPtr->is_winner()) {
                //cout << players[i]->to_string() << " wins\n";
                //return;
            //}
            //if (boardPtr->is_draw()) {
                //cout << "Draw!\n";
                //return;
            //}
        }
    }
}
