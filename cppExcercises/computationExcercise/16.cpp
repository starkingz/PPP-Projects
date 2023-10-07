// Chapter 4 - Computation
// Excercise 18
// Date: 06/10/2023
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

/**
 * sqroot - find the square root of a number
 * @n: input value
 * Return: i or 0
*/
double sqroot(double n)
{
        for (double i = 0; i <= n; ++i) {
                if (i * i == n) {
                        return i;
                }
        }
        return 0;
}

/**
 * square - multiply value by itself
 * @n: input value
 * Return: result
*/
double square(double n)
{
        return n * n;
}

/**
 * main - solve quadratic equation with the form (square(x)) + bx + c = 0 ...
 * ... using the quadratic equation formula
 * 
 * Return: 0 always (success)
*/
int main()
{
        cout << " ---------- Quadratic expression stardard form ax^2 + bx + c = 0 -----------\n"
             <<  "Enter three co-efficients:\n";
        cout << "co-efficient a: ";
        double a {0.0};
        cin >> a;
        while (a == 0) {
                cout << "a can't be 0\n";
                cout << "Try again!\n";
                cout << "co-efficient a: ";
                cin >> a;
        }
        cout << "co-efficient b: ";
        double b {0.0};
        cin >> b;
        cout << "co-efficient c: ";
        double c {0.0};
        cin >> c;

        double x1 {0.0};
        double x2 {0.0};
        double discriminant {(square(b) - (4 * a * c))};

        // Quadratic formula - x = [ -b (+-) sqrt(b^2 - 4ac) ] / 2a
        x1 = -b + sqroot(discriminant) / (2 * a);
        x2 = -b - sqroot(discriminant) / (2 * a);

        // if imaginery number
        if (discriminant < 0) {
                x1 = -b / (2 * a);
                x2 = sqroot(-discriminant) / (2 * a);
                cout << "\nAnswer: x = " << x1  << " (+-) " << x2 << "i"<< endl;
        }
        else
        cout << "\nAnswer: x = " << x1 << " or " << x2 << endl;

        return 0;

}