#include <iostream>

// create a fibonnaci recursive function with a pass-by-reference argument

int fib(int n)
{
	// int& m = n;
	// if (m <= 1)
	// 	return n;
	// return fib(m - 1) + fib(m - 2);
	if (n == 0)
		return 1;
	int sum {1};
	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
	return sum;
}

// entry point (test fib function)
int main()
{
	std::cout << "Enter size of nth number: ";
	int n {0};

	std::cin >> n;

	if (!std::cin)
		throw std::runtime_error("bad input");
	// std::cout << "0\n1\n";
	int i = fib(n);
	if (i <= 0)
		throw std::runtime_error("overflow");
	// for (int i = 2; i < n; i++) {
		std::cout << i << std::endl;
	// }
	return 0;
}
