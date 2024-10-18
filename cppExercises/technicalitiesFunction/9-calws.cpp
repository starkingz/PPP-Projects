#include "chapter8header.h"

/**
 * calws - compute overall performance of weighted sum
 * Description: scores of alternative is multiplied by the weighting and...
 * ...summed to calculate the overall performance of each alternative
 * @rating: evaluated point values based on the defined criteria
 * @weighting: co-efficient assigned to each criterion
 *
 * Return: sum of all
 */
double calws(const vector <double>& rating, const vector<double>& weighting)
{
	int rlen = rating.size();
	int wlen = weighting.size();

	if (rlen != wlen)
		error("wrong sizes");

	double sum {0};

	for (int i = 0; i < wlen; i++) {
		sum += rating[i] * weighting[i];
	}
	return sum;
}
