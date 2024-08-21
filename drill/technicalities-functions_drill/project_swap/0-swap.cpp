#include "swap.h"

/**
 * swap_v - swap values using pass-by-value
 * @a: first value to swap
 * @b: second value to swap
 *
 * Return: nothing
 */
void swap_v(int a, int b)
{
	int temp;

	temp = a, a = b;
	b = temp;
}
