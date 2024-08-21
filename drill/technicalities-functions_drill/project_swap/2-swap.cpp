#include "swap.h"

/**
 * swap_cr - swap values using pass-by-const-reference
 * @a: first value to swap
 * @b: second value to swap
 *
 * Return: nothing
 */
void swap_cr(const int& a, const int& b)
{
	int temp;

	temp = a, a = b;
	b = temp;
}
