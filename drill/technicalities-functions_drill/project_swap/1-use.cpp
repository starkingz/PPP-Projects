#include "swap.h"
#include <iostream>
using namespace std;

/**
 * main - print swapped values using swap_r()
 *
 * Return: Always 0 (success)
 */
int main()
{
	int x = 7;
	int y = 9;

	cout << "Before (x, y): " << x << ", " << y << endl;
	// swap_r(x,y);
	// replace ? by v, r, or cr
	// swap_r(7,9);
	cout << "After (x, y): " << x << ", " << y << endl;

	// const int cx = 7;
	// const int cy = 9;

	// swap_r(cx,cy);
	// swap_r(7.7,9.9);

	double dx = 7.7;
	double dy = 9.9;

	swap_r(dx,dy);
	// swap_r(7.7,9.9);
}
