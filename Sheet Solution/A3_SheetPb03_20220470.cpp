// File: A3_SheetPb03_20220470.cpp
// Purpose: Creates a frequency table
// Author: Jana Ramadan
// Section: S21
// ID: 20220470
// TA: Rana Abdelkader
// Date: 2 Dec 2023
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <cctype>
using namespace std;
int main() {
    string filename;
    cin >> filename;
    filename += ".txt";
    ifstream file(filename);
    if (file.is_open()) {       // the file opened successfully
        map<string, int> freq;
        string line;
        while (getline(file, line)) {         //tool ma fy lines
            for (char& c : line) {          // for every character in line
                if (!isalnum(c) && c != '-')
                    c = ' ';
                else
                    c = tolower(c);
            }
            stringstream s(line);
            string word;
            while (s >> word) {
                freq[word]++;        //incrementing the value of the integer associated with the key(count of the word)
            }
        }
        for (const auto &pair : freq) {           // printing the map
            cout << pair.first << " : " << pair.second << endl;
        }
    } else {
        cout << "Error cannot open the file." << endl;
    }
    return 0;
}
