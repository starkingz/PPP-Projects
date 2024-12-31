// Originally written by Ohia Goodstar
// Chapter 8 - Technicalities - functions, etc.
// Exercise 3
// Date: 10.09.2024
#include "../../std_lib_facilities.h"

/**
 * fibonacci - Algorithm to find maximum value an int can hold using fibonacci..
 * ...sequence
 * @x: first element of v
 * @y: second element of v
 * @v: vector to store sum of the two previous numbers
 * @n: number of elements to put into v
 *
 * Return: previous IF (previous > current)
 */
int fibonacci(int x, int y, int n)
{
	if (2 > n)
		error ("low values");
	if (x > y)		// stop x from having a greater value
		error ("Greater preceeding value");

	int previous {x};
	int current {y};
	int sum {0};

	for (int i {2}; i < n && current >= previous; i++) {
		sum = previous + current;

		previous = current;
		current = sum;
	}
	if (previous > current)
		return previous;
	error("maximum not reached"); // if current >= previous
}

/**
 * main - entry point (testing purposes)
 * description: try different fibonacci sequences to get its maximum values
 * that an int can hold with different sequences
 *
 * Return: Always 0 (success)
 */
int main()
try {
	std::cout << "Find the maximum value that an int can approximately hold"
		  << " using different fibonacci sequences.\nEnter two integer "
		  << "values(used to start fibonacci sequence) followed by size"
		  << " of sequence\n"; // input size atleast more than 60 to exceed maximum

	int x {0};
	int y {0};
	int n {0};

	while (std::cin >> x >> y >> n) {

		int max = fibonacci(x, y, n);

		std::cout << "Using this sequence an int can approximately hold"
			  << " a maximum of " << max << " value" << std::endl;

		std::cout << "Try again: ";
	}
	if (!cin)
		error("bad input"); // handle input error
	keep_window_open("~");
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
