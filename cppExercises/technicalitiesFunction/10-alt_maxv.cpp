#include "chapter8header.h"

/**
 * maxv2 - An alternative solution of maxv() function
 * @v: vector to sort
 *
 * Return: (last)th element
 */
double maxv2(vector<double>& v)
{
	sort(v.begin(), v.end()); // from smallest to largest
	return v[v.size() - 1];
}
