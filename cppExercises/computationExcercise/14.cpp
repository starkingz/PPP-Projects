// Chapter 4 - Computation
// Excercise 16
// Date: 02/10/2023
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * main - find mode in a sequence of integer values
*/
int main()
{
        vector <int> vals;
        int mode {0};
        bool is_positive {true};
        
        cout << "Program to find the mode of positive series of integers\n";
        cout << "Enter a positive sequence of numbers: ";
        int val;
        while (cin >> val) {
                if (val < 0) // don't read if negative
                is_positive = false;
                else
                vals.push_back(val);
        }

        int max {0};
        int count {0};
        int i, len;

        len = vals.size();
        sort (vals.begin(), vals.end());
        for (i = 0; i < len; i++) {
                if (i == 0 || vals[i] == vals[i - 1]) {
                        ++count;
                        if (max < count) {
                                max = count;
                                mode = vals[i];
                        }
                }
                else {
                        count = 0;
                        ++count;
                }
        }

        if (is_positive != true)
        cout << "Positive sequence of numbers only!\n";
        else if (mode <= 1)
        cout << "Mode not found!\n";
        else
        cout << "Mode: " << mode << endl;
        
        return 0;

}