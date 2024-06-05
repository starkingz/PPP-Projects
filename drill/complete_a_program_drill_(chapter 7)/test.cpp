// complete a program - chapter 7
// Please ignore for testing purposes only

#include "../../std_lib_facilities.h"
/**
 * is_square - solve squares of a number using multiple addition
 * @x: input
 *
 * Return: result
 */
int is_square(int x)
{
	int res = 0;
	for (int i = 1; i <= x; i++)
	{
		res += x;
	}
	return res;
}

/**
 * main - test code
 *
 * Return: 0
 */
int main()
{
	// cout << "Enter a string ";
	// char ch;
	// cin >> ch;

	// cin.unget();
	// string s;
	// while (cin.get(ch) && isalpha(ch)) // check if it reads whitespace
	// 	s += ch;
	// cin.unget();
	// ch = cin.get();
	// s = ch;
	// cout << "output: " << s << endl;
       	// cout << "result: " << val << endl;
	// cout << "Please enter input file name: ";
	// string iname;
	// cin >> iname;

	// ifstream ist{iname};
	// if(!ist)
	// 	error("Can't open input file ", iname);
	// int temperature;
	// cout << "Enter a temperature: ";
	// cin >> temperature;

	// if (temperature < 50)
	// 	cout << "It's cold!" << endl;
	// if (temperature > 50)
	// 	cout << "It's hot!" << endl;
	// else
	// 	cout << "Maybe it's raining!" << endl;
	cout << "Enter a number to find the square: ";
	int n;
	cin >> n;

	cout << "Output: " << is_square(n) << endl;
	return 0;
}
