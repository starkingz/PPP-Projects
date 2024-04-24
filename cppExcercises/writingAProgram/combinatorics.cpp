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
double fact(int n)
{
	int i;
	double res = 1;

	if (n < 0)
		error("overflow of number");
	for (i = 1; i <= n; i++)
		res *= i;
	return (res);
}

/**
 * permutation - return result of an ordered subset of set
 * @a: number of objects
 * @b: object to be selected
 *
 * Return: result
 */
double permutation(int a, int b)
{
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
double combination(int a, int b)
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
{
	int a, b;
        double result = 0;

	cout << "Please enter two numbers to calculate \n"
	     << "Permutation or Combination: \n";
	while (cin >> a >> b)
	{
		if (0 > b || b > a)
			error("Invalid number");
		cout << "Please specify your choice - Permutation(p) or Combination(c)"
		     << "\nEnter (p or c) followed by any value: \n";
		char resp;
		cin >> resp;

		if (resp == 'c' || resp == 'C')
			result = combination(a, b);
		else if (resp == 'p' || resp == 'P')
			result = permutation(a, b);
		else
			error("wrong response");
	}
	cout << result << endl;
}
