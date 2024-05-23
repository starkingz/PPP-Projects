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
	cout << "Enter a double value: ";
	char ch;
	cin >> ch;

	double val;
	if (ch == '2')
	{
		cin.unget();
		cin >> val;
		// cin.putback(ch);
	}
	if (!cin)
		cout << "Not read" << endl;
       	cout << "result: " << val << endl;

}
