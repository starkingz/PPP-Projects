// Chapter 5 - Errors
// Excercise 4
// Date: 27/12/2023
// #include "../std_lib_facilities.h" // external library
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

/**
 * error: return runtime error
*/
void error(string s)
{
        throw runtime_error(s);
}

/**
 * ctok - convert from celsius to kelvin
 * @c: argument
 * 
 * Return: result
*/
double ctok(double c)
{
        
        if (c < -273.15)        // check
                error("Input below 'absolute zero'");

        double k = c + 273.15;
        return k;
}

int main()
{
        cout << "Enter a temperature in degree celsius: \n";
        double c = 0;
        cin >> c;

        double k = ctok(c);
        cout << k << " kelvin" << '\n';
}

