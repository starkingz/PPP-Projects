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

	for (i = 1; i <= n; i++)
		res *= i;
	return (res);
}

/**
 * perm - return result of an ordered subset of set
 * @a: number of objects
 * @b: object to be selected
 *
 * Return: result
 */
double perm(int a, int b)
{
	int i;
	int n = a - b;

	double res = fact(a) / fact(n);
	return (res);
}

/**
 * comb - return result of un-ordered subset of set
 * @a: number of objects
 * @b: object to be selected
 *
 * Return: result
 */
double comb(int a, int b)
{
	double res = 1;

	res = perm(a, b) / fact(b);

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

	cout << "two numbers: \n";
	while (cin >> a >> b)
	{
		cout << "Combination or permutation (c or p): \n";
		char res;
		cin >> res;

		if (res == 'c')
			result = comb(a, b);
		else if (res == 'p')
			result = perm(a, b);
		else
			error("wrong response");
	}
	cout << result << endl;
}
