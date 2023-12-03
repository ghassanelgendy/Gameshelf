// File: A3_SheetPb02_20220239.cpp
// Purpose: Class named StringSet that uses the cosine similarity formula to calculate the
// similarity between two strings or files or set of words in general, with features like
// getting the intersection and the union of two sets.
// Author: Ghassan Elgendy
// Section: S21
// ID: 20220239
// TA: Rana Abdelkader
// Date: 3 Dec 2023
#include <bits/stdc++.h>

#define End return 0;
using namespace std;

class StringSet {
private:
    vector<string> tokens;
public:
    StringSet() = default;

    StringSet(string input) { //for strings
        addString(input);
    }

    StringSet(char *filename) { //for txt files
        string name = ".//";
        name.append(filename);
        fstream file(name);
        string sentence;
        if (!file.is_open()) {
            cout << "Cannot find your file.\n";
        }
        while (getline(file, sentence)) {
            addString(sentence);
        }
        file.close();
    }

    void clear() {
        tokens.clear();
    }

    void addString(string input) {
        transform(input.begin(), input.end(), input.begin(), ::tolower); //akhaleha lowercase
        regex removePunctuation("\\w+"); //ashel ay haga gher elhrouf
        sregex_iterator awel_eltokens = sregex_iterator(input.begin(), input.end(),
                                                        removePunctuation); //iterator 3la awel elvector
        sregex_iterator akher_eltokens = sregex_iterator(); //iterator 3la akhro
        for (sregex_iterator i = awel_eltokens; i != akher_eltokens; ++i) { //ba loop 3la elmatches w ahothom felvector
            smatch match = *i;
            if (find(tokens.begin(), tokens.end(), match.str()) == tokens.end()) {
                tokens.push_back(match.str());
            }
        }
    }

    void removeToken(string input) {
        tokens.erase(remove(tokens.begin(), tokens.end(), input), tokens.end());
    }

    friend ostream &operator<<(ostream &output, const StringSet &set) {
        for (const auto &token: set.tokens)
            output << token << ' ';
        return output;
    }

    void printInfo() {
        cout << "\n===THIS IS A SET OF WORDS===\n" << *this << endl << "SIZE = " << size() << endl;
    }

    unsigned int size() const {
        return (unsigned int) tokens.size();
    }

    StringSet operator+(StringSet &set) { //union
        StringSet unions(*this);
        string kalamKteer;
        for (auto kelma: set.tokens) {
            addString(kelma);
        }
        return unions;
    }

    StringSet operator*(StringSet &set) { //intersection
        StringSet intersection;
        sort(tokens.begin(), tokens.end());
        sort(set.tokens.begin(), set.tokens.end());
        set_intersection(tokens.begin(), tokens.end(),
                         set.tokens.begin(), set.tokens.end(),
                         back_inserter(intersection.tokens));
        return intersection;
    }

    double computeSimilarity(StringSet another) {
        StringSet intersection;
        intersection = ((*this) * another);
        return (intersection.size() / (sqrt(this->size()) * sqrt(another.size()))); //sim formula (mn eldoc)
    }
};

int main() {
    // Test the default constructor
    StringSet set1;
    cout << "Default constructor test:\n";
    cout << "Expected output: 0\n";
    cout << "Actual output: " << set1.size() << "\n\n";

    // Test the constructor that takes a string
    string in2{"Hello, world!"};
    StringSet set2(in2);
    cout << "String constructor test:\n";
    cout << "Expected output: 2\n";
    cout << "Actual output: " << set2.size() << "\n\n";

    // Test the addString method
    string in1 = "Hello, world!";
    set1.addString(in1);
    cout << "addString method test:\n";
    cout << "Expected output: 2\n";
    cout << "Actual output: " << set1.size() << "\n\n";

    // Test the clear method
    set1.clear();
    cout << "clear method test:\n";
    cout << "Expected output: 0\n";
    cout << "Actual output: " << set1.size() << "\n\n";

    // Test the removeToken method
    set2.removeToken("world");
    cout << "removeToken method test:\n";
    cout << "Expected output: 1\n";
    cout << "Actual output: " << set2.size() << "\n\n";

    // Test the operator+ method
    set1.addString("Hello");
    StringSet set3 = (set1 + set2);
    cout << "operator+ method test:\n";
    cout << "Expected output: 1\n";
    cout << "Actual output: " << set3.size() << "\n\n";

    // Test the operator* method
    StringSet set4 = (set1 * set2);
    cout << "operator* method test:\n";
    cout << "Expected output: 1\n";
    cout << "Actual output: " << set4.size() << "\n\n";

    // Test the printInfo method
    cout << "printInfo method test:\n";
    cout << "Expected output: \n===THIS IS A SET OF WORDS===\nhello \nSIZE = 1\n";
    cout << "Actual output: \n";
    set3.printInfo();
    cout << "\n";

    // Test the constructor that takes a filename
    char *filename = "A3_SheetPb02_20220239.txt";
    StringSet set5(filename);
    cout << "Filename constructor test:\n";
    cout << "Expected output: " << '7' << "\n";
    cout << "Actual output: " << set5.size() << "\n\n";

    // Test the overloaded << operator
    StringSet set;
    string setIn{"Hello, world!"};
    set.addString(setIn);
    cout << "Overloaded << operator test:\n";
    cout << "Expected output: hello world \n";
    cout << "Actual output: ";
    cout << set << "\n\n";
    string input1{"ghassan"};
    string input2{"Ghassan"};

    StringSet x(input1);
    StringSet y(input2);
    cout << x.computeSimilarity(y) << '\n'; //woooooooo
    cout << x.computeSimilarity(set5) << "\n\n";
    // Test the cosine similarity function
    cout << "similarity test cases:\n";
    string xx{"a little bird"};
    StringSet wahed(xx);
    StringSet etnen(xx);
    cout << "Expected output: 1\n";
    cout << "Actual output: " << wahed.computeSimilarity(etnen) << "\n\n";
    string testwallahy{"a little bird shata ghassan chirps"};
    StringSet talata(testwallahy);
    cout << "Expected output: 0.707107\n"; // sqrt(1/3) = 0.577350269
    cout << "Actual output: " << wahed.computeSimilarity(talata) << "\n\n";
    string big{"a big dog barks"};
    StringSet arb3a(big);
    cout << "Expected output: 0.288675\n";
    cout << "Actual output: " << wahed.computeSimilarity(arb3a) << "\n\n";
    End
}