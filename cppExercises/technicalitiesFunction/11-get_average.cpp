#include "chapter8header.h"

/**
 * get_average - pass all results through reference arguments
 * @v: a read-only vector-of-double that holds data set
 * @smallest: pass back smallest element of a vector
 * @largest: pass back largest element of a vector
 * @mean: pass back mean value of the data set
 * @median: pass back median value of the data set
 *
 * Return: nothing
 */
void get_average(const vector<double>& v, double& smallest, double& largest,
		  double& mean, double& median)
{
	smallest = minv(v);
	largest = maxv(v);
	mean = meanv(v);
	median = midv(v);
}
