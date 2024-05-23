#include <iostream>
using namespace std;

/**
 * main - print test cases for ch07calculator program\
 *
 * Return: always 0 (success)
 */
int main()
{
	const int number = 23;
	const char print = '='; // indicate print
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e')
			cout << number << i << print << endl;
		i++;
	}
	return 0;
}
