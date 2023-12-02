// File: A3_SheetPb05_20220239.cpp
// Purpose: Task manager with more functionalities than the normal one like sorting with multiple options.
// Author: Ghassan Elgendy
// Section: S21
// ID: 20220239
// TA: Rana Abdelkader
// Date: 2 Dec 2023
#include <bits/stdc++.h>

#define Bye return 0;
using namespace std;

class Process {
private: //holding the data of each "Process" object
    int PID;
    double memUsage;
    double memUsageKB;
    char memUnit;
    string name;
    string category;
public:
    Process() : name("Undeclared"), PID(0), category("NULL"), memUsage(0.0), memUnit('K'),
                memUsageKB(0.0) {}; //default constructor
    Process(vector<string> &data) : memUnit('K') { //parameterized constructor with special format from vector
        name = data[0];
        PID = stoi(data[1]);
        category = data[2];
        data[3].pop_back(); //removing the 'K'
        data[3] = regex_replace(data[3], regex("\\s+|,|[a-zA-Z]"), ""); //removing the comma
        memUsage = stof(data[3]); //converting it ot float
        memUsageKB = memUsage; //needed in the sorting
        while (memUsage > 1024) { //deciding which unit to use KB, MB or GB
            memUsage /= 1024;
            if (memUnit == 'K') {
                memUnit = 'M';
            } else if (memUnit == 'M') {
                memUnit = 'G';
            }
        }
    };

    Process(string n, int p, string c, float m) : name(n), PID(p), category(c), memUsage(m), memUnit('K') {
    } //Parameterized constructor from user (Optional)

    void print() { //Printing each process's data
        while (name.size() < 45) { //Padding for better visualization
            name = name + " ";
        }
        string PID_string = to_string(PID);
        while (PID_string.size() < 8) {
            PID_string.append(" ");
        }
        while (category.size() < 9) {
            category.append(" ");
        }
        cout << name << "   " << PID_string << "    " << category << "     " << memUsage << memUnit << endl;
    }

    int getPID() const {
        return PID;
    }

    string getName() {
        return name;
    }

    float getMemUsage() const {
        return memUsageKB;
    }

    string getCategory() {
        return category;
    }

    void setName(const string &n) {
        name = n;
    }

    void setPID(const int &p) {
        PID = p;
    }

    void setCategory(const string &c) {
        category = c;
    }

    void setMemUsage(const float &m) {
        memUsage = m;
    }
};

class GManager {
private:
    const string path = string(getenv("TEMP")) + "\\GManager.txt";
    const string command = "tasklist > " + path;
    vector<Process> *processes = new vector<Process>(); //dynamically allocated vector holding each process.
public:
    ~GManager() {  //destructor to deallocate dynamically allocated stuff.
        delete processes; //3shan a-deallocate el memory
        remove(path.c_str()); //bamsah eltemp file el3amalto
    }
    GManager(){};
    void addProcess(Process& process){
        processes->push_back(process);
    }
    void loadFromOS(string sorter = "name") { //optional parameter lw 3ayz sort mo3ayan
        system(command.c_str()); //kda m3aya elprocesses fe file
        string line;
        ifstream elfile(path);
        vector<string> processData(4); //vector feh eldata 3shan abaseh lelconstructor
        smatch match; //zy container shayel elmatches
        regex memory("(\\S+)\\sK"); //space before and after w feh K ba3dha
        regex name("(\\S+)\\e\\s"); //space before w after w feh e felaker
        regex PID("(\\s\\d+\\s)"); //space felnahyeten w feh arkam felnos
        regex category("(Services|Console)"); //ya de ya de
        int w{0}; //3shan a3ady eltasteer bta3 cmd
        while (elfile) {
            w++;
            getline(elfile, line);
            if (w > 6) {
                if (regex_search(line, match, name)) {
                    processData[0] = (match.str());
                }

                if (regex_search(line, match, PID)) {
                    processData[1] = (match.str());
                }
                if (regex_search(line, match, category)) {
                    processData[2] = (match.str());
                }

                if (regex_search(line, match, memory)) {
                    processData[3] = (match.str());
                }
                processes->push_back(Process(processData)); //bahot elprocesses felvector
                processData.clear(); //bafady vector eldata kol satr
            }
        }
        elfile.close();
        if (sorter == "PID") sortByPID();
        else if (sorter == "Memory") sortByMemoryUse();
        else sortByName();
    }

    //sorters by name, PID, memory use.
    void sortByMemoryUse(bool isAscending = false) {
        if (isAscending) {
            sort(processes->begin(), processes->end(), [](Process &a, Process &b) {
                return (a.getMemUsage()) < (b.getMemUsage()); //lambda to handle the usage comparison (BELKiloByte)
            });
        } else {
            sort(processes->begin(), processes->end(), [](Process &a, Process &b) {
                return (a.getMemUsage()) > (b.getMemUsage());
            });
        }
    }

    void sortByPID(bool isAscending = true) {
        sort(processes->begin(), processes->end(), [](Process &a, Process &b) {
            return (a.getPID()) < (b.getPID());//lambda to handle the PID comparison
        });
    }

    void sortByName(bool isAscending = true) { //lambda to handle the name comparison
        if (isAscending) {
            sort(processes->begin(), processes->end(), [](Process &a, Process &b) {
                return (a.getName()) < (b.getName());
            });
        } else {
            sort(processes->begin(), processes->end(), [](Process &a, Process &b) {
                return (a.getName()) < (b.getName());
            });
        }
    }

    //print the processes in the vector
    void print() {
        //header 3shan elshakl ;)
        cout << "====================[ WELCOME TO GTASK MANAGER BY GHASSAN :'D ]=========================\n"
                "Process Name                                     PID        Category      Memory Used\n" <<
                 "------------                                    -----       --------      -------------\n";
        for (auto a: *processes)
            a.print();
    }
    template<typename... Processes> //template 3shan akhod ay 3adad processes
    void AddProcess(Processes... p) {
        (this->processes->push_back(p), ...);
    }
};
int main() {
    GManager c;
    c.loadFromOS();
    Process G("google",0,"Services",5.5);
    Process K; //creating a process
    c.AddProcess(G,K);
    c.sortByMemoryUse();
    c.print();
    Bye
}