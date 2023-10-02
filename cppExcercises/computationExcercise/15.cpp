// Chapter 4 - Computation
// Excercise 17
// Date: 03/10/2023
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * main -  find the max, min and mode of a sequence of strings
*/
int main()
{
        vector <string> strs;
        string str_max {" "};
        string str_min {" "};
        bool first {true};

        cout << "Enter a sequence of strings to get max, min and mode: (terminate with ctrl-Z)\n";
        string str;

        while (cin >> str) {
                strs.push_back(str);

                if (first == true) { // only work once
                        first = false;
                        str_max = str;
                        str_min = str;
                }
                else if (str < str_min) {
                        str_min = str;
                }
                else if (str > str_max) {
                        str_max = str;
                }
        }

        sort (strs.begin(), strs.end()); // sort alphabetically

        int len = strs.size();
        int i = 0;
        int count {0};
        int highest_count {0};
        string mode {0};

        for (i = 0; i < len; i++) {
                if (i == 0 || strs[i] == strs[i - 1]) {
                        ++count;
                        if (highest_count < count) {
                                highest_count = count;
                                mode = strs[i];
                        }
                }
                else {
                        count = 0; // reset counter
                        ++count;
                }
        }

        cout << "Sequence minimum (alphabetically): " << str_min << endl;
        cout << "Sequence minimum (alphabetically): " << str_max << endl;
        if (highest_count <= 1)
        cout << "Mode not found\n";
        else
        cout << "Mode: " << mode << " (no of frequency == " << highest_count  << ")"<< endl;
        /**
         * Another method to find the min and max in a vector with less code
         * 1.   Firstly you sort the values in the vector
         * 2.   Then for min you output the first index 0f the vector i.e (0)
         * 3.   for the max you output the last index of the vector which can
         *      be done by checking for the size of the vector then subtract
         *      the index by 1
         * check code below. (Uncomment to use)
        */
        // cout << "\nMin: " << strs[0] << endl; /* first index in vector */ 
        // cout << "Max: " << strs[len - 1] << endl; /* last index in vector /

        return 0;
}