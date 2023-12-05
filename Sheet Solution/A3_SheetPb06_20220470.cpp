// File: A3_SheetPb06_20220470.cpp
// Purpose: Game of life
// Author: Jana Ramadan
// Section: S21
// ID: 20220470
// TA: Rana Abdelkader
// Date: 2 Dec 2023
#include <iostream>
using namespace std;
class Universe {
private:
    bool grid[30][30];
public:
    Universe() {      // first it resets the grid
        reset();
    }
    void initialize() {
        srand(time(0));
        for (int i = 0; i < 30; ++i){
            for (int j = 0; j < 30; ++j) {
                grid[i][j] = rand() % 2;         //Takes a random initialization
            }
        }

    }
    void reset() {
        for (int i = 0; i < 30; i++){
            for (int j = 0; j < 30; j++){
                grid[i][j] = false;          // resets all the grid to dead
            }
        }
    }
    int count_neighbors(int x, int y) {
        int count = 0;
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                int x_neighbors = x + i;
                int y_neighbors = y + j;
                if (x_neighbors >= 0 && x_neighbors < 30 && y_neighbors >= 0 && y_neighbors < 30 && !(i == 0 && j == 0)) {    //checks if it is in the grid
                    if (grid[x_neighbors][y_neighbors]) {              // if it is alive it increments the count
                        count++;
                    }
                }
            }
        }
        return count;
    }
    void next_generation() {
        bool new_grid[30][30];          // a new grid to store the next generation
        for (int i = 0; i < 30; i++) {
            for (int j = 0; j < 30; j++) {
                int alive = count_neighbors(i, j);
                if (grid[i][j]) {         // checks the rules
                    if (alive == 2 || alive== 3)
                        new_grid[i][j] = true;
                    else if(alive<2 ||alive>3)
                        new_grid[i][j] = false;
                }
                else {
                    if (alive== 3){
                        new_grid[i][j] = true;
                    }
                    else{
                        new_grid[i][j] = false;
                    }
                }
            }
        }
        for (int i = 0; i < 30; i++){
            for (int j = 0; j < 30; j++){
                grid[i][j] = new_grid[i][j];
            }
        }
    }

    void display() {
        for (int i = 0; i < 30;i++) {
            for (int j = 0; j < 30; j++) {
                if(grid[i][j]){
                    cout << '*' ;        // star if alive
                }
                else{
                    cout <<'/';          // slash if dead
                }
            }
        }
    }
    void run(int run_number) {           // Runs the game for a certain number of times
        for (int i = 0; i < run_number; i++) {
            display();
            next_generation();
        }
    }
};

int  main() {
    Universe universe;
    universe.initialize();
    universe.run(100);
    return 0;
}