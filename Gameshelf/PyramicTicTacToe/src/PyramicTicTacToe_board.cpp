// File name: PyramicTicTacToe_board.h
// Purpose: implementation file for the PyramicTicTacToe game containing the functions.
// Author(s):  Rawan Ehab 
// ID(s):       20220133  
// Section:  S21
//TA : Eng. Rana Abdelrazik
// Date:    8/12/2023
// Version: 1
#include "../include/PyramicTicTacToe_classes.h"
#include <iostream>
#include <iomanip>

using namespace std;

PyramicTicTacToe_Board::PyramicTicTacToe_Board() {
    //pyramid. Five squares make the base, then three, then one.
    n_rows = 3;
    n_cols = 5;
    board = new char *[n_rows];
    for (int i = 0; i < n_rows; i++) {
        board[i] = new char[n_cols];
        for (int j = 0; j < n_cols; j++)
            board[i][j] = 0; //bytb3 blank 3shan zero hena ascii mesh number fa btb2a space fadya
        // board[i][j] = 36 dah bytb3 array 5x3 of $ 3shan ascii 36 = $
    }
}

void PyramicTicTacToe_Board::display_board() {
    for (int i = 0; i < n_rows; i++) {
        // Add spaces before each row
        for (int k = 0; k < n_rows - i - 1; k++) {
            cout << "        ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            if (board[i][j] == 0) {
                cout << setw(4) << "(" << i << "," << j << ")" << setw(4);
            } else {
                cout << setw(4) << board[i][j] << setw(4) << "";
            }
        }
        cout << endl;
    }
}


bool PyramicTicTacToe_Board::update_board(int x, int y, char mark) {
    // Only update if move is valid
    if (x >= 0 && x < n_rows && y >= 0 && y < 2 * x + 1 && board[x][y] == 0) {
        board[x][y] = toupper(mark);
        n_moves++;
        return true;
    } else
        return false;
}

bool PyramicTicTacToe_Board::is_winner() {
    if(board[0][0]==board[1][1]&&board[0][0]==board[2][2]&&board[0][0]!=0) return true;
    if(board[1][0]==board[1][1]&&board[1][1]==board[1][2]&&(board[1][1]!=0))return true;
    if(board[0][0]==board[1][0]&&board[0][0]==board[2][0]&&(board[0][0]!=0)) return true;
    if(board[0][0]==board[1][2]&&board[0][0]==board[2][4]&&(board[0][0]!=0)) return true;
    for(int i=2,j=0;j<3;j++)
    {
        if(board[i][j]==board[i][j+1]&&board[i][j]==board[i][j+2]&&(board[i][j]!=0)) return true;
    }

   return false;
}




bool PyramicTicTacToe_Board::is_draw() {
    return (n_moves == 9 && !is_winner());
}

bool PyramicTicTacToe_Board::game_is_over() {
    return n_moves >= 9;
}






