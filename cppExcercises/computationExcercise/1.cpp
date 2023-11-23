// Chapter 4 - Computation
// Excercise 2
// Date: 23/09/2023
// Fix the median problem, original souce code doesn't
// output correct median if the the element size
// is even
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// compute mean and median temperatures
int main()
{
        vector<double> temps; // temperatures
        
        cout << "Enter temperature values: ";
        for (double temp; cin>>temp; ) // read into temp
        temps.push_back(temp); // put temp into vector
        
        // compute mean temperature:
        double sum = 0;
        for (double x : temps) sum += x;
        cout << "Average temperature: " << sum/temps.size() << '\n';
        
        // compute median temperature:
        sort(temps.begin(), temps.end()); // sort temperatures
        int len = temps.size();
        if (len % 2 != 0)
        cout << "Median temperature: " << temps[len / 2] << '\n';
        else
        cout << "Median temperature: " << (temps[len / 2] + temps[(len / 2) - 1]) / 2 << endl;

        return 0;
}