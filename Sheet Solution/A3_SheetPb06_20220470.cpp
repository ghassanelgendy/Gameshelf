// File: A3_SheetPb06_20220470.cpp
// Purpose: Game of life
// Author: Jana Ramadan
// Section: S21
// ID: 20220470
// TA: Rana Abdelkader
// Date: 2 Dec 2023
#include <iostream>
#include <fstream>
using namespace std;
const int Max_Rows = 100;
const int Max_Cols = 100;
class Universe {
private:
    int rows;
    int cols;
    bool grid[Max_Rows][Max_Cols];
public:
    Universe(int r, int c) : rows(r), cols(c) {
        reset();  // resets all the cells to dead first
    }
    void initialize(string filename) {          // Initializes the cells of the grid from a file
        ifstream file(filename);
        if (file.is_open()) {
            for (int i = 0; i < rows; i++){
                for (int j = 0; j < cols; j++) {
                    char c;
                    file.get(c);
                    if (c != ' ' && c != '\n') {
                        grid[i][j] = c - '0';           // storing the integer value in the grid
                    }
                }
            }
            file.close();
        }
        else{
            cout << "The file cannot be opened.";
            exit(900);
        }
    }
    void initialize() {
        srand(time(0));
        for (int i = 0; i < 30; ++i){
            for (int j = 0; j < 30; ++j) {
                grid[i][j] = rand() % 2;         //Initializing the cells randomly
            }
        }
    }
    void reset() {
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){
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
                if (x_neighbors >= 0 && x_neighbors < rows && y_neighbors >= 0 && y_neighbors < cols && !(i == 0 && j == 0)) {    //checks if it is in the grid
                    if (grid[x_neighbors][y_neighbors]) {              // if it is alive it increments the count
                        count++;
                    }
                }
            }
        }
        return count;
    }
    void next_generation() {
        bool new_grid[Max_Rows][Max_Cols];          // a new grid to store the next generation
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int alive = count_neighbors(i, j);
                if (grid[i][j]) {         // checks the rules
                    if (alive == 2 || alive== 3){
                        new_grid[i][j] = true;
                    }
                    else if(alive<2 ||alive>3){
                        new_grid[i][j] = false;
                    }
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
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){
                grid[i][j] = new_grid[i][j];
            }
        }
    }

    void display() {
        for (int i = 0; i < rows;i++) {
            for (int j = 0; j < cols; j++) {
                cout << (grid[i][j]?'*':'-');
            }
            cout << endl;
        }
        cout << "=============== Next Generation ==================\n" ;
    }
    void run(int run_number) {           // Runs the game for a certain number of times
        for (int i = 0; i < run_number; i++) {
            display();
            next_generation();
        }
    }
};
int main() {
    int rows;
    int cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "\nEnter the number of columns: ";
    cin >> cols;
    if (rows <= Max_Rows && cols <= Max_Cols){
        cout << "\nEnter 1 if you would like to input the initial vales or Enter 2 if you want random initial values:  ";
        int x;
        cin>>x;
        Universe universe(rows, cols);
        if(x==1){
            cout << "\nWhat is the name of the file? " ;
            string filename;
            cin >> filename;
            filename += ".txt";
            cout << "\n";
            universe.initialize(filename);
        }
        else{
            cout << "\n";
            universe.initialize();
        }
        universe.run(100);
    }
    else {
        cout << "\nThe grid size entered is too large." << endl;
    }
    return 0;
}
