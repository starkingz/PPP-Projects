#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
        // int num = {1};
        double previous {0};
        double current {1};
        int count = 0;
        int i;

        for (i = 1; i <= 64; i++) {
                ++count;
                cout << "Current square: " << count << "\n";
                cout << "Current number of grains: " << current << endl;
                current += current;
                cout << "Previous number of grains: " << previous << endl << endl;
                previous = current;
                
        }
        return 0;
}