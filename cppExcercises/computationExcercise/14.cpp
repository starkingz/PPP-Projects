#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
        vector <int> vals;
        int mode {0};

        cout << "Enter a sequence of number (Find mode): ";
        int val;
        while (cin >> val) {
                vals.push_back(val);
        }

        int max {};
        int count {};
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

        // len = mode.size();
        // for (i = 0; i < len; i++) {
                cout << "Mode: " << mode << endl;
        // }

        return 0;

}