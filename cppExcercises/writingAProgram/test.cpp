// For testing purposes only

#include "../../std_lib_facilities.h" // external library

int main()
{
	cout << "Enter a number of factorise: ";
	int n;
	cin >> n;

	double res = 1;

	for (int i = 1; i <= n; i++)
	{

		res *= i;
		cout << i << ". " << res << endl;
	}
	cout << res << endl;
	// cout << "Enter two numbers to multiply: ";
	// int a = 0, b = 0;
	// cin >> a >> b;

	// double mul_val = a * b;

	// cout << mul_val << endl;
	// if (mul_val <= 0)
	// 	error("Overflow");

	return 0;
}
