// Class definition for XO_GameManager class
// Author:       Mohamed Elramly
// Updated by :  Ghassan Elgendy
// Date:    10/10/2022
// Version: 1
//
//#include <iostream>
//#include "GUI_Classes.hpp"
//using namespace std;
//
//GUI_GameManager::GUI_GameManager(Board* bPtr, Player* playerPtr[2]) {
//    boardPtr = bPtr;
//    players[0] = playerPtr[0];
//    players[1] = playerPtr[1];
//}
//
//void GUI_GameManager::run() {
//    int x, y;
//
// while (!boardPtr->game_is_over()) {
//        for (int i : {0, 1}) {
//            players[i]->get_move(x, y);
//            while (!boardPtr->update_board(x, y, players[i]->get_symbol())) {
//                players[i]->get_move(x, y);
//            }
//            system("cls");
//            cout << "\t\t\t\t\t===[" << players[0]->to_string() << " (" << players[0]->get_symbol() << ')' << " VS " << players[1]->to_string() << " (" << players[1]->get_symbol() << ")]===\n\n" << endl;
//
//            boardPtr->display_board();
//
//            if (boardPtr->is_winner()) {
//                cout << players[i]->to_string() << " wins\n";
//                return;
//            }
//            if (boardPtr->is_draw()) {
//                cout << "Draw!\n";
//                return;
//            }
//        }
//    }
//
//}
