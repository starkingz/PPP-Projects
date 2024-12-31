// Originally written by Ohia Goodstar
// Chapter 8 - Technicalities - functions, etc.
// Exercise 10
// Date: 22.10.2024
#include "chapter8header.h"

/**
 * maxv - return largest element of a vector argument
 * @v: vector that holds largest element
 *
 * Return: largest element
 */
double maxv(const vector<double>& v)
{
	double largest {0};

	for (double x : v) {
		if (x > largest)
			largest = x;
	}
	return largest;
}
