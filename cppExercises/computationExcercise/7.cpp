// Chapter 4 - Computation
// Excercise 8
// Date: 29/09/2023
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

/**
 * main - calculate how many squares are required to give the inventor at least 1000 ...
 * ... grains of rice, at least 1,000,000 grains, and at least 1,000,000,000 grains.
*/
int main()
{
        bool first {true};
        int previous {0};
        int current {1};
        int count = 0;
        int i;

        for (i = 1; i <= 64; i++) {
                ++count;
                cout << "Current square: " << count << "\n";
                if (first == true) {
                        first = false;
                        cout << "Current number of grains: " << current << endl << endl;
                        previous = current;
                }
                else {
                        current += current;
                        cout << "Current number of grains: " << current << endl;
                        cout << "Previous number of grains: " << previous << endl << endl;
                        previous = current;
                }
                
        }
        return 0;
}