// Chapter 5 - Errors
// Excercise 2
// Date: 24/12/2023
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

// Find errors in this code, lists them and correct them
/**
 * ctok - convert from celsius to kelvin
 * @c: argument
 * 
 * Return: result
*/

// double ctok(double c) // converts Celsius to Kelvin
// {
//         int k = c + 273.15; // error: truncates the values
//         return int          // error: can't return a keyword and no closing semi-colon
// }

// int main()
// {
//         double c = 0; // declare input variable
//         cin >> d; // retrieve temperature to input variable -> error: d is undeclared
//         double k = ctok("c"); // convert temperature -> error: wrong argument
//         Cout << k << '/n' ; // print out temperature -> error: unrecognised keyword and wrong closing character
// }

// Corrected Program

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

int main()
{
        cout << "Enter a temperature in degree celsius: \n";
        double c = 0;
        cin >> c;

        double k = ctok(c);
        cout << k << " kelvin" << '\n';
}