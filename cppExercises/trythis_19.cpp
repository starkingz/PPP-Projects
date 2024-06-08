// #include "../std_lib_facilities.h"
// Date: 28/10/2023
/**
 * Problem: To see what an uncaught exception error looks like, run a small program that ...
 * ... uses error() without catching any exceptions
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

/**
 * error - read and throw error message
*/
void error(string s1, string s2)
{
        throw runtime_error(s1 + s2);
}

/**
 * print - read and print double
*/
void print()
{
        double val {0};

        cout << "Enter random numbers: ";
        cin >> val;
        if (!cin)
                error("unable to read double", " or wrong data type\n");
        cout << "Value read successfully!\n";
}

/**
 * main - entry point
*/

int main()
{
        print();

        return 0;
}