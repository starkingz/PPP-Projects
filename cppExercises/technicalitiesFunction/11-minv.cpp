#include "chapter8header.h"

/**
 * minv - find smallest element of a vector argument
 * @v: a read-only vector that holds elements
 *
 * Return: smallest element
 */
double minv(const vector<double>& v)
{
	double smallest = maxv(v); // start with largest element

	for (double x : v) {
		if (x < smallest)
			smallest = x;
	}
	return smallest;
}
