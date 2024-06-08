// A simple program that detects and count repeated adjacent words
#include <iostream>
using namespace std;

int main(){
    int no_of_words = 0;
    string previous = "";
    string current;
    while(cin >> current){
        ++no_of_words;
        if(previous == current){
            cout << "Repeated: " << current << endl;
            cout << "Number of repeated words: " << no_of_words << endl;
        }
        previous = current;
    }
}