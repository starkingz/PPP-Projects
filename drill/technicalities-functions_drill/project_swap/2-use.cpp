#include "swap.h"

/**
 * main - print swapped values using swap_cr()
 *
 * Return: Always 0 (success)
 */
int main()
{
	int x = 7;
	int y =9;

	swap_cr(x,y); // replace ? by v, r, or cr
	swap_cr(7,9);

	const int cx = 7;
	const int cy = 9;

	swap_cr(cx,cy);
	swap_cr(7.7,9.9);

	double dx = 7.7;
	double dy = 9.9;

	swap_cr(dx,dy);
	swap_cr(7.7,9.9);
}
