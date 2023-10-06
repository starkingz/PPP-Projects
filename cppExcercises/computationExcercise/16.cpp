// Chapter 4 - Computation
// Excercise 18
// Date: 06/10/2023
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

double sqroot(double n)
{
        for (double i = 0; i <= n; ++i) {
                if (i * i == n) {
                        return i;
                }
        }
        return 0;
}

double square(double n)
{
        return n * n;
}

int main()
{
        cout << " ---------- Quadratic expression form a(square(x)) + bx + c = 0 -----------\n"
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

        x1 = (-b + sqroot(square(b) - (4 * a * c))) / (2 * a);
        x2 = (-b - sqroot(square(b) - (4 * a * c))) / (2 * a);
        // cout << discriminant << endl;

        if (discriminant < 0) {
                x1 = -b / (2 * a);
                x2 = sqroot(-discriminant) / (2 * a);
                cout << "Answer: " << x1  << " +/- " << x2 << "i"<< endl;
        }
        else
        cout << "Answer: " << x1 << " or " << x2 << endl;

        return 0;

}