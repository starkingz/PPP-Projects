#include "chapter8header.h"

/**
 * main - test functions
 *
 */
int main()
{
	vector <double>v;

	double readv;
	while (cin >> readv) {	// end input with '|'
		v.push_back(readv);
	}
	double d = get_median(v);

	cout << "Result is " << d << endl;
	return 0;
}
