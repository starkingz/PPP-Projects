// For testing purposes only

#include "../../std_lib_facilities.h" // external library

int main()
{
	cout << "Enter character to close the program\n";
	string s;
	cin >> s;

	while (true)
	{
		cout << "Please enter " << s << " to exit program\n";
		string ss;

		while (cin >> ss && ss != s)
			cout << "Please enter " << s << " to exit program\n";
		return 1;
	}
	return 1;
	// cout << "Enter a number of factorise: ";
	// int n;
	// cin >> n;

	// long long int res = 1;
	// long int res1 = 1;
	// int res2 = 1;
	// double res3 = 1;
	// float res4 = 1;
	// cout << "factorise(" << n << ")" <<  endl;
	// for (int i = 1; i <= n; i++)
	// {

	// 	res *= i;
	// 	res1 *= i;
	// 	res2 *= i;
	// 	res3 *= i;
	// 	res4 *= i;
	// 	cout << i << ". long long: " << res << ", long int: " << res1
	// 	     << ", int: " << res2 << ", double: "<< res3 << ", flaot: " << res4 << endl;
	// }
	// cout << res << endl;
	// cout << "Size of long long int: " << sizeof(long long int) << endl;
	// cout << "Size of long long int variable: " << sizeof(res) << endl;
	// cout << "Size of long int: " << sizeof(long int) << endl;
	// cout << "Size of long int variable: " << sizeof(res1) << endl;
	// cout << "Size of double: " << sizeof(double) << endl;
	// cout << "Enter two numbers to multiply: ";
	// int a = 0, b = 0;
	// cin >> a >> b;

	// double mul_val = a * b;

	// cout << mul_val << endl;
	// if (mul_val <= 0)
	// 	error("Overflow");

	// return 0;
}
