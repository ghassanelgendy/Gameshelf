#include <iostream>
#include <random>
#include <iomanip>
#include <algorithm>
#include "../include/5x5Headerfiles.h"
void Board5x5::getPlayers(Player* players[2])
{
    players5[0] = players[0];
    players5[1] = players[1];
}
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
            cout << players5[0]->to_string()<<" wins!" << endl;
        }
        else if (owins > xwins) {
            cout << players5[1]->to_string() << " wins!" << endl;
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
}

bool Board5x5::game_is_over () {
    if(n_moves==24){
        return true;
    }
    else{
        return false;
    }
}
char Board5x5::get_board_value(int x, int y) {
    return board[x][y];
}

void Board5x5::set_board_value(int& x, int& y, char value) {
    board[x][y] = value;
}



