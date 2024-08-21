#include "swap.h"

/**
 * swap_r - swap values using pass-by-non-const-reference
 * @a: first value to swap
 * @b: second value to swap
 *
 * Return: nothing
 */
void swap_r(double& a, double& b)
{
	double temp;

	temp = a, a = b;
	b = temp;
}
