// Chapter 5 - Errors
// Excercise 3
// Date: 27/12/2023
// #include "../std_lib_facilities.h" // external library
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

/**
 * ctok - convert from celsius to kelvin
 * @c: argument
 * 
 * Return: result
*/
double ctok(double c)
{
        double k = c + 273.15;
        return k;
}

/**
 * error: return runtime error
*/
void error(string s)
{
        throw runtime_error(s);
}

int main()
{
        cout << "Enter a temperature in degree celsius: \n";
        double c = 0;
        cin >> c;

        if (c < -273.15)        // check
                error("Can't take input below -273.15 degree celsius");

        double k = ctok(c);
        cout << k << " kelvin" << '\n';
}

