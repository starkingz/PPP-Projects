// Chapter 5 - Errors
// Excercise 8
// Date: 2/1/2023
#include "../../std_lib_facilities.h" // external library
// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <vector>
// using namespace std;

/**
 * main - read and store series of integers and sum the first N values
*/
int main()
{
        vector <int> ns;

        cout << "Please enter the number of values you want to sum: ";
        int valno {0};
        cin >> valno;

        if (!cin)
                error("could'nt read an int");

        cout << "Please enter some integers (press '|' to stop):\n";
        for(int n; cin >> n;)
                ns.push_back(n);
        
        int sum = ns[0];
        int len = ns.size();
        int i;

        if (len < valno)
                error("Values you want to sum is more than the stored number of values");

        for(i = 1; i <= valno; ++i)
        {
                // print only once
                if (i == 1)
                        cout << "The sum of the first " << valno << " numbers ( " << ns[0];
                if (i < valno)
                {
                        sum += ns[i];
                        cout << " " << ns[i];
                }
                if (i == valno)
                        cout << " ) is " << sum << ".\n";
        }

        return 0;
}