#include "xyz.h"

/**
 * main - print var of three namespaces X, Y and Z
 *
 * Return: Always 0 (success)
 */
int main()
{
	X::var = 7;
	X::print();		// print X's var

	using namespace Y;

	var = 9;
	print();		// print Y's var

	{
		using Z::var;
		using Z::print;
		var = 11;
		print();	// print Z's var
	}

	print();		// print Y's var
	X::print();		// print X's var

	return 0;
}
