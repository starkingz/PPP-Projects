// Originally written by Ohia Goodstar
// Chapter 8 - Technicalities - functions, etc.
// Exercise 3
// Date: 10.09.2024
#include "chapter8header.h"

/**
 * fibonacci - store sequences of elements in vector <int> v whereby elements...
 * ...is the sum of the two previous elements. accept real numbers
 * @x: first element of v
 * @y: second element of v
 * @v: vector to store sum of previous numbers
 * @n: number of elements to put into v
 *
 * Return: nothing
 */
void fibonacci(int x, int y, vector <int>& v, int n)
{
	if (2 > n)
		error ("low values");

	int previous {x};
	int current {y};
	int sum {0};

	v.push_back(previous);
	v.push_back(current);

	for (int i {2}; i < n; i++) {
		int sum = previous + current;

		if (sum < 0)
			error("overflow");

		v.push_back(sum);

		previous = current;
		current = sum;
	}
}
