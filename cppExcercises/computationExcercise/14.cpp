#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
        vector <int> vals;
        // vector <int> modes;
        int mode {0};
        bool first {true};
        
        cout << "Program to find the mode of positive series of integers\n";
        cout << "Enter a positive sequence of numbers: ";
        int val;
        while (cin >> val) {
                if (val < 0)
                first = false;
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

        if (first != true)
        cout << "Positive sequence of numbers only!\n";
        else if (mode <= 1)
        cout << "Mode not found!\n";
        else
        cout << "Mode: " << mode << endl;
        
        return 0;

}