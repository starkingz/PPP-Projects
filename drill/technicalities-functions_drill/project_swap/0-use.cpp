#include "swap.h"
#include <iostream>
using namespace std;

/**
 * main - print swapped values using swap_v()
 *
 * Return: Always 0 (success)
 */
int main()
{
	int x = 7;
	int y =9;

	cout << "Before swap (x, y): " << x << ", " << y << endl;
	swap_v(x,y); // replace ? by v, r, or cr
	swap_v(7,9);
	cout << "After swap (x, y): " << x << ", " << y << endl;

	const int cx = 7;
	const int cy = 9;

	cout << "Before swap(cx, cy): " << cx << ", " << cy << endl;
	swap_v(cx,cy);
	swap_v(7.7,9.9);
	cout << "After swap(cx, cy): " << cx << ", " << cy << endl;

	double dx = 7.7;
	double dy = 9.9;

	cout << "Before swap(dx, dy): " << dx << ", " << dy << endl;
	swap_v(dx,dy);
	swap_v(7.7,9.9);
	cout << "After swap(dx, dy): " << dx << ", " << dy << endl;

	return 0;
}
