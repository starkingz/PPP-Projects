// Chapter 5 - Errors
// Excercise 6
// Date: 28/12/2023
// #include "../std_lib_facilities.h" // external library
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

/**
 * ftoc - convert from fahrenheit to celsius
 * @c: temperature argument
 * 
 * Return: result
*/
double ftoc(double c);

/**
 * ctof - convert from celsius to fahrenheit
 * @f: temperature argument
 * 
 * Return: result
*/
double ctof(double f);

/**
 * dconverter - convert fahrenheit to celsius or celsius to fahrenheit
 * @d: input
*/
string dconverter(string d);

/**
 * error - print runtime error to terminal
 * @s: input
*/
void error(string s);

int main()
{
        double temp {0.0};
        string td {"c or f"};
        double res {0.0};

        cout << "============== Convert from Kelvin to Celsius Or"
             << " Celsius to Kelvin =============\n";
        cout << "Enter temperature value followed by the degree"
             << "(celsius == c or fahrenheit == f):\n\n";
        cin >> temp >> td;

        if (td == "c" || td == "celsius")
                res = ftoc(temp);
        else if (td == "f" || td == "fahrenheit")
                res = ctof(temp);
        else
                error("Wrong temperature degree");
        
        td = dconverter(td);
        cout << res << " " << td << endl;
}

double ftoc(double c)
{
        if (c < 0)
                error("Input below absolute zero");
        double form = 9 / 5.0 * c + 32;
        return form;
}

double ctof(double f)
{
        if (f < 32)
                error("Input below absolute zero");
        double form = 5/9.0 * (f - 32);
        return form;
}

void error(string s)
{
        throw runtime_error(s);
}

string dconverter(string d)
{
        string fd {"fahrenheit"};
        string cd {"celsius"};

        if (d == "f" || d == "fahrenheit")
                return cd;
        else
                return fd;
}