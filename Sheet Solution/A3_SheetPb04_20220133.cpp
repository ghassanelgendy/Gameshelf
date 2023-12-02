#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class set{
private:
    vector<T> items;
public:
    void add(T item){
        for(int i=0; i<items.size(); i++){
            if(items[i] == item){ //to avoid duplicates
                return;
            }
        }
        items.push_back(item);
    }
    void remove(T& item){
        for(int i=0; i<items.size(); i++){
            if(items[i] == item){
                items.erase(items.begin()+i);
                return;
            }
        }
    }
    int count(){
        return items.size();
    }
    bool exists(T& item){
        for(int i=0; i<items.size(); i++){
            if(items[i] == item){
                return true;
            }
        }
        return false;
    }
    T* arr(){
        T* array = new T[items.size()];
        for(int i=0; i<items.size(); i++){
            array[i] = items[i];
        }
        return array;
    }
};


int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    set<int> integers;
    integers.add(1);
    integers.add(2);
    integers.add(3);
    integers.add(2);
    cout << "number of integers in set: " << integers.count() << endl;
    int  itemtocheck = 2;
    cout<< integers.exists(itemtocheck)<<endl;

    set<string> strings;
    strings.add("apple");
    strings.add("orange");
    strings.add("banana");


    cout << "number of strings in set: " << strings.count() << endl;
    string itemToRemove = "orange";
    strings.remove(itemToRemove);
    cout << "number of strings in set: " << strings.count() << endl;

    cout << "Items in strings: ";
    string* stringArray = strings.arr();
    for (size_t i = 0; i < strings.count(); ++i) {
        cout << stringArray[i] << " ";
    }
    cout << endl;

    delete[] stringArray;//deallocating memory
    return 0;

}