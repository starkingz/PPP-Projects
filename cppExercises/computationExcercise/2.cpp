// Chapter 4 - Computation
// Excercise 3
// Date: 24/09/2023
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

/**
 * main - Read a sequence of double and ... 
 * ... think of them like a distance between two neigbouring city
 * Description: calculate and print the total sum of the distance, ...
 * ... find and print the smallest and greatest distance b/w two cities
 * ... calculate the mean distance b/w two cities 
*/
int main()
{
        bool first {true};
        vector <double> distance;
        double smallest {0};
        double greatest {0};

        cout << "Enter sequence of double values: \n";

        double val;
        while (cin >> val) {
                distance.push_back(val);        // Put val into vector

                if (first == true) {
                        first = false;
                        smallest = val;
                        greatest = val;
                }
                if (val < smallest)
                smallest = val;
                if (val > greatest)
                greatest = val;
        }
        // sum of total distance
        double sum {0};
        for (double x : distance)
        sum += x;
        cout << "Sum of all distance: " << sum << endl;

        // Output smallest and greatest distance
        cout << "Smallest distance: " << smallest << endl;
        cout << "Greatest distance: " << greatest << endl;

        // Compute mean distance
        int len = distance.size();
        cout << "Average distance: " << sum / len << endl;

        return 0;
}