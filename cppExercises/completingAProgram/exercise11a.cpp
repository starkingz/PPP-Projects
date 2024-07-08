// Chapter 7 - Completing a program
// Excercise 11a
// Date: 30/06/2024
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

/*
                  Revised by Ohia Goodstar July 2024
		  Originally written by Ohia Goodstar october 2023
		  [Check first program in chapter 4 exercise 18](./computationExcercise/16.cpp)

		  This program calculates a quadratic equation.
		  input from cin; output to cout;
*/


/**
 * keep_window_open - for windows console to keep window open
 * @s: input to close window
 *
 */
void keep_window_open(string s)
{
	cin.clear();
	cin.ignore(120, '\n');
	for (;;) {
		cout << "Enter " << s << " to exit" << endl;
		string s2;

		while (cin >> s2 && s != s2)
			cout << "Enter " << s << " to exit" << endl;

		return;
	}
}

/**
 * error - output runtime_error to stdout
 * @s: error to throw
 *
 */
void error(string s)
{
	throw runtime_error(s);
}

/**
 * sqr_t - find the square root of a number
 * @n: input value
 * Return: sqrt(n)
 */
double sqr_t(double n)
{
	if (n < 0)
		error("sqrt(): cannot find negative value");
	return sqrt(n);
}

/**
 * square - multiply value by itself
 * @n: input value
 * Return: result
 */
double square(double n)
{
	return n * n;
}

/**
 * get_value - read input from cin
 *
 * Return: val
 */
double get_value()
{
	double val = 0;

	if (!(cin >> val))
		error("invalid input");
	return val;
}

/**
 * calculate - calculate the quadratic expression...
 * ... Quadratic formula: x = [ -b (+-) sqrt(b^2 - 4ac) ] / 2a
 * @a: quadratic co-efficient
 * @b: linear co-efficient
 * @c: constant co-efficient
 */
void calculate(double a, double b, double c)
{
	double x1 = 0;
	double x2 = 0;
	double discriminant = square(b) - (4 * a * c);

	if (discriminant < 0) { // if imaginary number
		x1 = -b / (2 * a);
		x2 = sqr_t(abs(discriminant)) / (2 * a);
		cout << "x = " << x1  << " (+-) " << x2 << "i"<< endl;
	}
	else {
		x1 = (-b + sqr_t(discriminant)) / (2 * a);
		x2 = (-b - sqr_t(discriminant)) / (2 * a);
		cout << "x = " << x1 << " or " << x2 << endl;
	}
}

const char quit  = 'Q';		// represent keyword to quit
const char print = '\n';	// represent keyword to print

/**
 * ignore_err - clean up (ignore) left over input from istream buffer
 * .. or return quit if user inputs 'Q'
 * @ch: time to stop ignore
 *
 * Return: true or false
 */
bool ignore_err(char ch)
{
	// search for input
	char c = 0;
	while (cin.get(c)) {
		if (ch == c)
			return true;
		if (c == quit)	// if user wants to exit program
			return false;
	}
	return true;
}

/**
 * statement - handle program loop and errors
 *
 */
void statement()
{
	while (cin)
	try {
		cout << ">a: ";
		double a = get_value();

		if (a == 0)
			error("a can't be zero");

		cout << ">b: ";
		double b = get_value();

		cout << ">c: ";
		double c = get_value();

	        calculate(a, b, c);
	}
	catch (exception& e) {
		cin.clear();	// clean up error message
		if (!ignore_err(print))
			return;	// exit program
		cerr << e.what() << endl;
	}
}

/**
 * main - solve quadratic equation with the form (square(x)) + bx + c = 0 ...
 * ... using the quadratic equation formula
 *
 * Return: 0 always (success)
 */
int main()
try {

	cout << " ---------- Quadratic expression stardard form ax^2 + bx + c = 0 -----------\n"
	     << "Enter three co-efficients to find x:\n"
	     << "Use ENTER key to next or print and " << quit << " to quit program\n";

	statement();
	keep_window_open("~");
	return 0;
}
catch (exception& e) {
	cerr << "error: " << e.what() << endl;
	keep_window_open("~~");
	return 1;
}
