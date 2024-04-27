// Chapter 6 - Writing a program
// Exercise 10
// Date: 22.04.2024

#include "../../std_lib_facilities.h" // external library

/**
 * fact - multiplies a number by its sequence below it till 1
 * @n: positive number to factorise
 *
 * Return: res
 */
double fact(double n)
{
	int i;
	double res = 1;
	for (i = 1; i <= n; i++)
	{
		res *= i;
		if (i == 171)
			error("Overflow");
	}
	return (res);
}

/**
 * permutation - return result of an ordered subset of set
 * @a: number of objects
 * @b: object to be selected
 *
 * Return: result
 */
double permutation(double a, double b)
{
	if (1 > b || 1 > a || b > a)
		error("Wrong permutation sizes");
	int n = a - b;

	double res = fact(a) / fact(n);
	return (res);
}

/**
 * combination - return result of un-ordered subset of set
 * @a: number of objects
 * @b: object to be selected
 *
 * Return: result
 */
double combination(double a, double b)
{
	double res = 1;

	res = permutation(a, b) / fact(b);

	return (res);
}

/**
 * main - read numbers and check errors
 *
 * Return: void
 */
int main()
try
{
	double a, b;
        double result = 0;

	cout << "========== Calculate Permutation and Combination ==========\n"
	     << "Please enter two positive numbers to calculate: ";
	while(cin >> a >> b)
	{
		if (1 > a || 1 > b || b > a)
			error ("Wrong sizes");

		cout << "Please specify your choice, \n"
		     << "'p' for Permutation while 'c' for Combination\n";
		char resp;
		cin >> resp;

		if (resp == 'c' || resp == 'C')
		{
			result = combination(a, b);
			cout << "C("<< a << "," << b << ") = " << result << endl;
		}
		else if (resp == 'p' || resp == 'P')
		{
			result = permutation(a, b);
			cout << "P("<< a << "," << b << ") = " << result << endl;
		}
		else
			error("wrong response");
		cout << "Please enter two positive numbers to calculate: ";
	}
       	if (!cin)
	       	error("could'nt read two numbers");

	keep_window_open("~");

	return 0;
}
catch (exception& e)
{
	cerr << e.what() << endl;
	keep_window_open("~");
	return 1;
}
catch (...)
{
	cerr << "Something went wrong\n";
	keep_window_open("~");
	return 2;
}
