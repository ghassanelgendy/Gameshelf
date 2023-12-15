#include <iostream>
#include <random>
#include <iomanip>
#include <algorithm>
#include "../include/5x5Headerfiles.h"
// Set the board
Board5x5::Board5x5(){
    n_rows = n_cols = 25;         //elboard fady
    board = new char*[n_rows];
    for (int i = 0; i < n_rows; i++) {
        board [i] = new char[n_cols];
        for (int j = 0; j < n_cols; j++)
            board[i][j] = 0;
    }
}

// Return true  if move is valid and put it on board
// within board boundaries in empty cell
// Return false otherwise
bool Board5x5::update_board (int x, int y, char mark){
    // Only update if move is valid
    if (!(x < 0 || x > 4 || y < 0 || y > 4) && (board[x][y] == 0)) {
        board[x][y] = toupper(mark);
        n_moves++;
        return true;
    }
    else
        return false;
}

// Display the board and the pieces on it
void Board5x5::display_board() {
    for (int i: {0,1,2,3,4}) {
        cout << "\n| ";
        for (int j: {0,1,2,3,4}) {
            cout << "(" << i << "," << j << ")";
            cout << setw(2) << board [i][j] << " |";
        }
        cout << "\n------------------------------------------\n";
    }
    cout << endl;
}

// Returns true if there is any winner
// either X or O
// Written in a complex way. DO NOT DO LIKE THIS.
//bool Board5x5::is_winner() {
//    char row_win[3], col_win[3], diag_win[2];
//    for (int i:{0,1,2}) {
//        row_win[i] = board[i][0] & board[i][1] & board[i][2];
//        col_win[i] = board[0][i] & board[1][i] & board[2][i];
//    }
//    diag_win[0] = board[0][0] & board[1][1] & board[2][2];
//    diag_win[1] = board[2][0] & board[1][1] & board[0][2];
//
//    for (int i:{0,1,2}) {
//        if ( (row_win[i] && (row_win[i] == board[i][0])) ||
//             (col_win[i] && (col_win[i] == board[0][i])) )
//        {return true;}
//    }
//    if ((diag_win[0] && diag_win[0] == board[1][1]) ||
//        (diag_win[1] && diag_win[1] == board[1][1]))
//    {return true;}
//    return false;
//}

bool Board5x5::is_winner() {
    int xwins = 0;
    int owins = 0;

    // Check rows
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j] != 0) {
                if (board[i][j] == 'X') {
                    xwins++;
                }
                else if (board[i][j] == 'O') {
                    owins++;
                }
            }
        }
    }

    // Check columns
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i + 2][j] && board[i][j] != 0) {
                if (board[i][j] == 'X') {
                    xwins++;
                }
                else if (board[i][j] == 'O') {
                    owins++;
                }
            }
        }
    }

    // Check diagonals
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2] && board[i][j] != 0) {
                if (board[i][j] == 'X') {
                    xwins++;
                }
                else if (board[i][j] == 'O') {
                    owins++;
                }
            }
        }
    }

    // Check reverse diagonals
    for (int i = 0; i < 3; i++) {
        for (int j = 2; j < 5; j++) {
            if (board[i][j] == board[i + 1][j - 1] && board[i + 1][j - 1] == board[i + 2][j - 2] && board[i][j] != 0) {
                if (board[i][j] == 'X') {
                    xwins++;
                }
                else if (board[i][j] == 'O') {
                    owins++;
                }
            }
        }
    }

    // Check if either X or O has more three-in-a-rows after 24 moves
    if (n_moves == 24) {
        if (xwins > owins) {
            cout << " Player X wins!" << endl;
        }
        else if (owins > xwins) {
            cout << "Player O wins!" << endl;
        }
        else {
            cout << "It's a draw!" << endl;
        }
        return true;
    }
    else {
        return false;
    }
}




    

// Return true if 9 moves are done and no winner
bool Board5x5::is_draw() {
    return false;
    //return (n_moves == 24 && !is_winner());
}

bool Board5x5::game_is_over () {
    if(n_moves==24){
        return true;
    }
    else{
        return false;
    }
}


