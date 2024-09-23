// Originally written by Ohia Goodstar
// Chapter 8 - Technicalities - functions, etc.
// Exercise 5
// Date: 12.09.2024
#include "chapter8header.h"

/**
 * main - entry point (test functions f=implementation)
 *
 * Return: Always 0 (success)
 */
int main()
{
	std::cout << "Test rev1() function\n";

	vector <int> vf;
	vector <int> vr;
	vector <int> v1;
	vector <int> v2;

	for (int i = 1; i < 10; i = i + 2) { // increment by 2
		vf.push_back(i);
	}
	v1 = vf;
	v2 = vf;

	std::string label {"Original vector"};

	print(vf, label);
	rev1(vf, vr);

	{			// testing how a scope is used
		std::string label {"Reversed vector"};
		print(vr, label);
	}

	// solution for second reverse function rev2()
	std::cout << "\nTest rev2() function\n";

	print(v1, label);
	rev2(v1);

	{
		std::string label {"Reversed vector"};
		print(v1, label);
	}

	std::cout << "\nTest rev3() function\n";

	print(v2, label);
	v2 = rev3(v2);

	{
		std::string label {"Reversed vector"};
		print(v2, label);
	}

	keep_window_open();
	return 0;
}
