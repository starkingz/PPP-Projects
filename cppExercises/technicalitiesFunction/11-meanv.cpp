#include "chapter8header.h"

/**
 * meanv- compute the mean of the data set
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
