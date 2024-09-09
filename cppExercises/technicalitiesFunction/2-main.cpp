// Chapter 8 - Technicalities - functions, etc.
// Exercise 2
// Date: 09.09.2024

#include "chapter8header.h"

/**
 * main - entry point (test print() implementation)
 *
 * Return: Always 0 (success)
 */
int main()
{
	vector <int> v;

	int digit {0};

	while (digit < 10) {
		v.push_back(digit);
		digit++;
	}

	std::string label {"Base 10 digits"};

	print(v, label);

	return 0;
}
