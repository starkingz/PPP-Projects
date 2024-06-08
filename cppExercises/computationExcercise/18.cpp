// Chapter 4 - Computation
// Excercise 20
// Date: 10/10/2023
// Modification of excercise of 19
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * main - read set of names and scores and find score through name
*/
int main()
{
        vector <string> uniq_names;
        vector <string> names;
        vector <int> scores;
        string strterminate {"NoName"};
        int iterminate {0};
        bool exit {false};
        int len {0};

        cout << "Enter set of names and scores: (Terminate with NoName 0) \n";
        string name {" "};
        int score {0};

        while (cin >> name >> score) {
                names.push_back(name);

                if (name == strterminate && score == iterminate ) {
                        exit = true;
                }
                len = names.size();
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

        // Find score of the name
        cout << "\n\n ---------- Search name to find score ----------\n";
        cout << "Enter name to search: \n";
        string findname {" "};
        cin >> findname;
        bool found {false};

        len = uniq_names.size();
        for (int i = 0; i < len; ++i) {
                if (findname == uniq_names[i]) {
                        cout << "1 Name found! Score is " << scores[i] << endl;
                        found = true;
                }
        }
        if (found == false)
        cout << "Name Not found.\n";

        return 0;
}