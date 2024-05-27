// Chapter 5 - Errors
// Excercise 7
// Date: 1/1/2023
// #include "../std_lib_facilities.h" // external library
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

/**
 * square - print the squares a number
 * sq: input
 * 
 * Return: result
*/
double square(double sq)
{
        double result = sq * sq;
        return result;
}

/**
 * error - print runtime error message to terminal
 * 
 * Return: void
*/
void error(string s)
{
        throw runtime_error(s);
}

/**
 * frr - find the real roots of a quadratic equation
 * @a: first co-efficient
 * @b: second co-efficient
 * @c: third co-efficient
 * 
 * Return: result
*/
double frr(double a, double b, double c)
{
        if (a == 0)
                error("frr() - a can't be 0");
        
        double d = square(b) - 4 * a * c;

        if (d < 0)
                error("frr() - discriminant is below 0");
        return d;
}

int main()
{
        cout << "========= CALACULATE QUADRATIC EQUATION ========\n";
        cout << "co-efficient a: ";
        double a {0.0};
        cin >> a;
        while (a == 0)
        {
                cout << "a can't be 0, try again!\n";
                cout <<"co-efficient a: ";
                cin >> a;
        }
        cout << "co-efficient b: ";
        double b {0.0};
        cin >> b;

        cout << "co-efficient c: ";
        double c {0.0};
        cin >> c;

        double d = frr(a, b, c);
        double x1 = (-b + sqrt(d)) / (2 * a); // positive quadratic formula
        double x2 = (-b - sqrt(d)) / (2 * a);  // negative quadratic formula
        
        cout << "\nDiscriminant: " << d << endl;
        if (x1 == x2)
                cout << "x is " << x1 << endl;
        else
                cout << "x is " << x1 << " and " << x2 << endl;
        
        return 0;
}