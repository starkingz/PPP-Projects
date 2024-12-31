// Originally written by Ohia Goodstar
// Chapter 8 - Technicalities - functions, etc.
// Exercise 10
// Date: 22.10.2024
#include "chapter8header.h"

/**
 * main - test exercise 10 solution
 *
 * Return: Always 0 (success)
 */
int main()
{
	vector<double> v;
	double vd {0};

	cout << "Enter sequence of floating-point numbers(stop input with |):\n";
	while (cin >> vd && vd != 0) { // end loop with non-floating point value
		v.push_back(vd);
	}
	cout << "Largest element is: " << maxv(v) << endl;
	cout << "Largest element is(alternative): " << maxv2(v) << endl;

	return 0;
}
