// complete a program - chapter 7
// Please ignore file for testing purposes only

#include "../../std_lib_facilities.h"

int main()
{
	double left = 0;
	cout << "Enter two integers to calculate modulo: ";
	double d = 0;
	cin >> left >> d;

	int a1 = narrow_cast <int> (left);
	int a2 = narrow_cast <int> (d);

	left = a1 % a2;

	cout << "Result: " << left << endl;
	return 0;
}
