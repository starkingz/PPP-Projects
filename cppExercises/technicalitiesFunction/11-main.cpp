#include "chapter8header.h"

/**
 * main - entry point
 *
 * Return: nothing
 */
int main()
{
	cout << "A simple program that finds the smallest, largest, mean"
	     << " and median of a set of data\n";
	cout << "Enter sets of data: (end input with non-floating point value)\n";

	vector <double> set;
	double num {0};

	while (cin >> num) {	// end with non-floating point value
		set.push_back(num);
	}

	Average avg {average(set)};

	cout << "\nRETURNING STRUCT CONTAINING THE RESULTS \n"
	     << "Smallest data is " << avg.smallest << endl
	     << "Largest data is " << avg.largest << endl
	     << "Mean value is " << avg.mean << endl
	     << "Median value is " << avg.median << endl;

	double smallest {0};
	double largest {0};
	double mean {0};
	double median {0};

	get_average(set, smallest, largest, mean, median);

	cout << "\nPASS RESULTS BACK THROUGH REFERENCE ARGUMENT\n"
	     << "Smallest data is " << smallest << endl
	     << "Largest data is " << largest << endl
	     << "Mean value is " << mean << endl
	     << "Median value is " << median << endl;
	return 0;
}
