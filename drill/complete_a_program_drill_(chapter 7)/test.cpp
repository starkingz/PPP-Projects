// complete a program - chapter 7
// Please ignore for testing purposes only

#include "../../std_lib_facilities.h"

/**
 * main - test code
 *
 * Return: 0
 */
int main()
{
	cout << "Enter a string ";
	char ch;
	cin >> ch;

	cin.unget();
	string s;
	while (cin.get(ch) && isalpha(ch)) // check if it reads whitespace
		s += ch;
	cin.unget();
	ch = cin.get();
	s = ch;
	cout << "output: " << s << endl;
       	// cout << "result: " << val << endl;

}
