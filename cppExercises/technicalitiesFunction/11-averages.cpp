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

/**
  * meanv - compute the mean of the data set
  * Description: sum of all values in the data set divided by the total..
  * ..number of values.
  * @set: a read-only vector that holds data set
  *
  * Return: mean value
  */
double meanv(const vector<double>& set)
{
	double sum {0};

	for (double number : set) {
		sum += number;
	}
	double result = sum / set.size();
	return result;
}

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

	if (!(len % 2))         // if odd
		return (copy[mid - 1] + copy[mid]) / 2;
	return copy[mid];
}
