#include "chapter8header.h"

/**
 * average - return a struct of all the computed results
 * @v: a read-only vector that holds data set
 *
 * Return: all computed results
 */
Average average(const vector<double>& v)
{
	return Average{minv(v), maxv(v), meanv(v), midv(v)};
}
