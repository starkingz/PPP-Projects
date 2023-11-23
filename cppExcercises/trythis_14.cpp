#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

void error(string s)
{
        throw runtime_error(s);
}

int main()
try
{
        cout << "Enter your favorite between 1 and 100: ";
        int n;
        cin >> n;

        if (n > 100 || n <= 0)
                error("Greater than 100 or less than 1");
        cout << "Wow! your favorite number is: " << n << '\n';

        return 0;
}
catch(runtime_error& e) {
        cerr << "Runtime error: " << e.what() << '\n';
        return 1;
}