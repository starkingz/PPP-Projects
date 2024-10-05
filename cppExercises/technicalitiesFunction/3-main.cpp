// Originally written by Ohia Goodstar
// Chapter 8 - Technicalities - functions, etc.
// Exercise 3
// Date: 10.09.2024
#include "chapter8header.h"

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main()
try {
	std::cout << "Enter two integer values (used to start fibonacci sequence)"
		  << " and size of sequence: ";

	int x {0};
	int y {0};
	int n {0};

	while (std::cin >> x >> y >> n) { // allow negative input
		vector <int> v;

		fibonacci(x, y, v, n);

		std::string label {"Fibonacci"};

		print(v, label);

		std::cout << "Try again: ";
	}
	return 0;
}
catch (exception& e) {
	std::cerr << "error: " << e.what() << std::endl;
	keep_window_open("~");
	return 1;
}
catch (...) {
	std::cerr << "Something went wrong\n";
	return 2;
}
