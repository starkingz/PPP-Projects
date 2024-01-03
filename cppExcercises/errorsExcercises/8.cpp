// Chapter 5 - Errors
// Excercise 9
// Date: 3/1/2023
// Modification of excercise 8
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
try {
        vector <int> ns;

        cout << "Please enter the number of values you want to sum: ";
        double valno {0};
        cin >> valno;
        
        int check_cast = narrow_cast<int>(valno); // check if the value 

        if (!cin)
                error("could'nt read an int");

        cout << "Please enter some integers (press '|' to stop):\n";
        for(double n; cin >> n;)
        {
                check_cast = narrow_cast<int>(n);
                ns.push_back(n);      
        }
        int sum = narrow_cast<int>(ns[0]);
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
                        sum += narrow_cast<int>(ns[i]);
                        cout << " " << ns[i];
                }
                if (i == valno)
                        cout << " ) is " << sum << ".\n";
        }

        return 0;
}
catch(out_of_range& e) {
        cerr << " Oops! Range error\n";
        return 1;
}
catch(runtime_error& e) {
        cerr << e.what() << endl;
        return 2;
}
catch(...) {    // catch all other exceptions
        cerr << "Something went wrong\n";
        return 3;
}