// #include "../std_lib_facilities.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void error(string s1, string s2)
{
        throw runtime_error(s1 + s2);
}

void print()
{
        double val {0};

        cout << "Enter random numbers: ";
        cin >> val;
        if (!cin)
                error("unable to read double", " or wrong data type\n");
        cout << "Value read successfully!\n";
}

int main()
try
{
        print();
}
catch (runtime_error& e) {
        cerr << "error: " << e.what() << endl;
        return 1;
}
catch (...) {
        cerr << "Undetected errors\n";
}