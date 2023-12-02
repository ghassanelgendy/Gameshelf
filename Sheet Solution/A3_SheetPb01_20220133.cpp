//Sheet 2 Problem 1
// Author: Rawan ehab
// Section: S21
// ID: 20220133
// TA: Rana Abdelkader
// Date: 2 Dec 2023

#include <iostream>
#include <fstream>

using namespace std;

class LabelGenerator {
protected:
    string prefix;
    int label;

public:
    LabelGenerator(string prefix, int first_label) : prefix(prefix), label(first_label - 1) {}

    LabelGenerator() : label(0) {}

    virtual LabelGenerator& nextLabel() {
        this->label++;
        return *this;
    }

    virtual void print(ostream &Cout) const {
        Cout << prefix << label;
    }

    friend ostream &operator<<(ostream &Cout, const LabelGenerator &labelGenerator) {
        labelGenerator.print(Cout);
        return Cout;
    }
 };

class FileLabelGenerator : public LabelGenerator {
private:
    string fileName;
    ifstream file;
    string labeltag;
public:
    FileLabelGenerator(string prefix, int label, string fileName) : LabelGenerator(prefix, label), fileName(fileName) {
        file.open(fileName);
        if (!file.is_open()) {
          cout << "File not found, please check file location and try again" << endl;
                exit(404);
        }
    }
     FileLabelGenerator(const FileLabelGenerator& other) : LabelGenerator(other), fileName(other.fileName) {
         file.open(fileName);
         if (!file.is_open()) {
             cout << "File not found, please check file location and try again" << endl;
             exit(404);
         }
     }
    LabelGenerator& nextLabel() override{
        string line;
          LabelGenerator::nextLabel();
             if (getline(file, labeltag)) { //3shan n5le el labeltag yb2a el line ely 3ndy
                 return *this;
             }
        return *this;
    }
    void print(ostream &Cout) const override {
        Cout << prefix << label <<' '<< labeltag;
    }


};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    LabelGenerator figureNumbers("Figure ", 1);
    LabelGenerator pointNumbers("P", 0);

    cout << "Figure numbers: ";
    for (int i = 0; i < 3; i++) {
        cout << figureNumbers.nextLabel() << ", ";
    }

    cout << endl << "Point numbers: ";
    for (int i = 0; i < 5; i++) {
        cout << pointNumbers.nextLabel() << ", ";
    }

    cout << endl << "More figures: ";
    for (int i = 0; i < 3; i++) {
        cout << figureNumbers.nextLabel() << ", ";
    }

    cout << endl;
   FileLabelGenerator figureLabels("Figure ", 1, "labels.txt");
cout << "Figure labels:\n";
for (int i = 0; i < 3; i++) {
    cout << figureLabels.nextLabel() << endl;
}

    return 0;
}