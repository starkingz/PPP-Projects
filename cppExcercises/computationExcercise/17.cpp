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
        bool first {true};

        cout << "Enter set of names and scores: (Terminate with NoName 0) \n";
        string name {" "};
        int score {0};

        while (cin >> name >> score) {
                names.push_back(name);

                if (name == strterminate && score == iterminate ) {
                        cout << "Exited\n";
                        break;
                }
                int len = names.size();
                for (int i = 0; i < len - 1; i++) {                        
                        if (name == names[i]) { // check for repeated name
                                cout << "Error! Name already exists\n"; // Error mess
                                first = false;
                                break;
                        }                      
                }
                if (first != true) {
                        break; // terminate after error message
                }
                else {
                        uniq_names.push_back(name);
                        scores.push_back(score);
                }
                first = true;
        }

        cout << "\n\nPaired values: \n";
        int len {0};
        len = uniq_names.size();
        for (int i = 0; i < len; ++i) {
                cout << uniq_names[i] << " " << scores[i] << endl;
        }

        return 0;
}