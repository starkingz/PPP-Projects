// Originally written by Ohia Goodstar
// Chapter 8 - Technicalities - functions, etc.
// Exercise 9
// Date: 18.10.2024
#include "chapter8header.h"
/**
   This program tests the solution for exercise 9
   Originally written by Ohia Goodstar 18.10.2024
   This program implements a simple weighted sum model
   input from cin(keyboard, etc); output to cout
*/

/**
 * getw - read line and assign weightings
 *
 * Return: weightings
 */
vector<double> getw()
{
	vector<double>weights;
	double w;

	while (cin >> w) {
		if (w == 0)
			return weights;
		if (w < 0)
			error("negative input not allowed");

		double ptd = w / 100; // convert to decimal

		weights.push_back(ptd);
	}
	error("Bad input");
}

/**
 * getp - read series of evaluated alternative point values
 *
 * Return: point values
 */
vector<double> getp()
{
	vector<double>pval;
	double val;

	while (cin >> val) {
		if (val == 0)
			return pval;
		if (val < 0)
			error("negative input not allowed");

		pval.push_back(val);
	}
	error("Bad input");
}

/**
 * maxp - return the index of the maximum element of a vector
 * @v: return index of v
 *
 * Return: index
 */
int maxp(const vector<double>& v)
{
	int highest {0};
	int indexh {0};
	int len = v.size();

	for (int i = 0; i < len; i++) {
		if (v[i] > highest) {
			highest = v[i];
			indexh = i;
		}
	}
	return indexh;
}

/**
 * main - entry point, test weighted sum
 *
 * Return: nothing
 */
int main()
try {
	vector <double> weight;
	vector <double> price;
	vector <double> best;
	double overall {0};
	string prompt {"Alternative "};

	cout << "SIMPLE WEIGHTED SUM MODEL (SWSM)\n"
	     << "SWSM is a method that offers a transperent and comprehensible\n"
	     << "decision making by weighting and evaluating various criteria\n"
	     << "\nGUIDE TO USE SWSM\n"
	     << "First step is to identify the relevant criteria on a piece of \n"
	     << "paper(To maintain clarity, maximum of 10 criteria are recommended).\n"
	     << "Enter weightings assigned to each criterion to reflect it's\n"
	     << "relative importance.\n"
	     << "Enter point values that reflects the performance of the\n"
	     << "alternatives in relation to each criterion.\n"
	     << "The alternative with the highest overall performance is printed\n"
	     << "as the best choice.\n"
	     << "ALWAYS END INPUTS WITH 0\n\n";

	cout << "Please enter number of alternatives(press ENTER key): ";
	double n {0};

	if (!(cin >> n && n > 0)) // read (only) postive integer
		error("Bad input");

	int altn = narrow_cast<int>(n); // check that n is an integer

	cout << "Please enter weightings of criteria(in percentage): ";
	weight = getw();

	cout << "Please systematically enter point values below"
	     << "(in any rating scale except percentage)" << endl;

	for (int i = 1; i <= altn; i++) {
		cout << prompt << i << ": ";
		price = getp();	// read line of point values

		overall = calws(weight, price);
		best.push_back(overall); // put overall scores into vector

		cout << "= " << overall << endl; // output overall benefit score
	}
	// output (only) best choice
	cout << "\nAlternative " << maxp(best) + 1 << " is the best choice\n";

	keep_window_open();
	return 0;
}
catch (exception& e) {
	cerr << "error: " << e.what() << endl;
	keep_window_open("~");
	return 1;
}
catch (...) {
	cerr << "Something went wrong\n";
	keep_window_open();
	return 2;
}
