#include "chapter8header.h"

/**
 * midv - compute the median of the data set
 * Description: A value with half the data set higher and half less than it
 * @set: a read-only vector that holds data set
 *
 * Return: median value
 */
double midv(const vector<double>& set)
{
	vector<double> copy = set; // copy here so elements can be sorted

	sort(copy.begin(), copy.end()); // smallest to largest

	int len = copy.size();
	int mid {len / 2};

	if (!(len % 2))		// if even
		return (copy[mid - 1] + copy[mid]) / 2;
	return copy[mid];
}
