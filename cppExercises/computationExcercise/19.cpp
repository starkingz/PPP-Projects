// Chapter 4 - Computation
// Excercise 20
// Date: 10/10/2023
// Modification of excercise of 19
// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// using namespace std;
#include "../../std_lib_facilities.h" // external library

/**
 * main - read set of names and scores, output all found names with same score
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

        cout << "Enter set of names and scores (Terminate with NoName 0): \n";
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
                                error ("Error! Name already exists"); // Error mess
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
        if (!cin)
                error("Could'nt read the score");

        // Find names with same scores
        cout << "\n\n ---------- Search integers to find names ----------\n";
        cout << "Enter an integer to search: \n";
        int findscore {0};
        cin >> findscore;
        bool found {false};
        int count {0};

        
        len = uniq_names.size();
        for (int i = 0; i < len; ++i) {
                if (findscore == scores[i]) {
                        ++count;
                        cout << uniq_names[i] << endl;
                        found = true;
                }
        }
        if (found == false)
        cout << "Score Not found.\n";
        if (count > 0)
        cout << count << " Name(s) found  \n";

        return 0;
}