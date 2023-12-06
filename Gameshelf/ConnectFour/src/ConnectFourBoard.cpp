// Class definition for X_O_Board class
// Author:       Mohamed Elramly
// Updated by :  Ghassan Elgendy
// Date:    09/12/2023
// Version: 1.1
#include <iostream>
#include <random>
#include <iomanip>
#include <algorithm>
#include "../include/ConnectFour_Classes.hpp"
using namespace std;

// Set the board
ConnectFourBoard::ConnectFourBoard() {
   n_rows = n_cols = 7;
   board = new char*[n_rows];
   for (int i = 0; i < n_rows; i++) {
      board [i] = new char[n_cols];
      for (int j = 0; j < n_cols; j++) {
          board[i][j] = 0;
      }
    }
    for (int k = 0; k < 6; ++k) {
        board[6][k] = 1;
    }
}

// Return true  if move is valid and put it on board
// within board boundaries in empty cell
// Return false otherwise
bool ConnectFourBoard::update_board (int x, int y, char mark){
   // Only update if move is valid
    for (int i = 0; i < 6; ++i) {
            if(board[i][y] == 0){
                x = i;
           }
   }
   if (!(x < 0 || x > 7 || y < 0 || y > 6) && (board[x][y] == 0)) {
      board[x][y] = toupper(mark);
      n_moves++;
      return true;
   }
   else
      return false;
}

// Display the board and the pieces on it
void ConnectFourBoard::display_board() {
   for (int i: {0,1,2,3,4,5}) {
      cout << "\n| ";
      for (int j: {0,1,2,3,4,5,6}) {
         cout << "(" << i << "," << j << ")";
         if (board[i][j] == 0) {
             cout << setw(1) <<board[i][j]<< "   |";
         }
         else {
             cout << setw(2) << board[i][j] << " |";
         }
      }
      cout << "\n-----------------------------------------------------------------";
   }
   cout << endl;
}

// Returns true if there is any winner
// either X or O
bool ConnectFourBoard::is_winner() {
    //to handle the rows win
    for (unsigned short i = 0; i < 6; i++)
    {
        for (unsigned short j = 0; j < 4; j++) {
            if (board[i][j] == board[i][j + 1] &&
                board[i][j] == board[i][j + 2] &&
                board[i][j] == board[i][j + 3] &&
                ((board[i][j] == 'X') || (board[i][j] == 'O')))
                {
                return true;
             }
        }
    }
    //to handle the col win
    for (unsigned short i = 0; i < 4; i++)
    {
        for (unsigned short j = 0; j < 7; j++) {
            if (board[i][j] == board[i+1][j] &&
                board[i][j] == board[i+2][j] && 
                board[i][j] == board[i+3][j] && 
                ((board[i][j] == 'X') || (board[i][j] == 'O')))
            {
                return true;
            }
        }
    }
    ////to handle the diag win
      for (unsigned short i = 0; i < 3; i++)
    {
        for (unsigned short j = 0; j < 4; j++) {
            if (board[i][j] == board[i + 1][j + 1] &&
                board[i][j] == board[i + 2][j + 2] &&
                board[i][j] == board[i + 3][j + 3] &&
                ((board[i][j] == 'X') || (board[i][j] == 'O'))){
                return true;
          }
        }

    }
      for (unsigned short i = 0; i < 3; i++) {
          for (unsigned short j = 3; j < 7; j++) {
              if (board[i][j] == board[i + 1][j - 1] &&
                  board[i][j] == board[i + 2][j - 2] &&
                  board[i][j] == board[i + 3][j - 3] &&
                  (board[i][j] == 'X' || board[i][j] == 'O')) {
                  return true;
              }
          }
      }
    return false;
    }


// Return true if 42 moves are done and no winner
bool ConnectFourBoard::is_draw() {
    return (n_moves == 42 && !is_winner());
}

bool ConnectFourBoard::game_is_over () {
    return n_moves >= 42;
}
