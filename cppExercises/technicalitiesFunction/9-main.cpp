// Originally written by Ohia Goodstar
// Chapter 8 - Technicalities - functions, etc.
// Exercise 8
// Date: 18.19.2024
// The first working version of this program computes for only
// one alternative.
#include "chapter8header.h"
// Program does not check for bad input
/**
 * getw - read line and assign weightings
 *
 * Return: weightings
 */
vector<double> getw()
{
	vector<double>weights;
	double w;

	while (cin >> w && w != 0) {
		double ptd = w / 100; // convert to decimal

		weights.push_back(ptd);
	}
	return weights;
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

	while (cin >> val && val > 0) {
		pval.push_back(val);
	}
	return pval;
}

/**
 * main - entry point, test wsm
 *
 * Return: nothing
 */
int main()
try {
	vector<double> weight;
	vector<double> price;
	double overall {0};

	weight = getw();
	price = getp();

	overall = calws(weight, price);

	cout << "Overall Performance is " << overall << endl;

	return 0;
}
catch (exception& e) {
	cerr << "error: " << e.what() << endl;
	keep_window_open();
	return 1;
}
