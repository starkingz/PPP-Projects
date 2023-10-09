#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
        vector <string> uniq_names;
        vector <string> names;
        vector <int> scores;
        string strterminate {"NoName"};
        int iterminate {0};
        bool exit {false};

        cout << "Enter set of names and scores: (Terminate with NoName 0) \n";
        string name {" "};
        int score {0};

        while (cin >> name >> score) {
                names.push_back(name);

                if (name == strterminate && score == iterminate ) {
                        exit = true;
                }
                int len = names.size();
                for (int i = 0; i < len - 1; i++) {                        
                        if (name == names[i]) { // check for repeated name
                                cout << "Error! Name already exists\n"; // Error mess
                                exit = true;
                                break;
                        }                      
                }
                if (exit != false) {
                        break; // terminate code
                }
                else {
                        uniq_names.push_back(name);
                        scores.push_back(score);
                }
                exit = false;
        }

        cout << "\n\nPaired values: \n";
        int len {0};
        len = uniq_names.size();
        for (int i = 0; i < len; ++i) {
                cout << uniq_names[i] << " " << scores[i] << endl;
        }

        return 0;
}