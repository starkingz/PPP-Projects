// Chapter 8 (PPP3)
// Try this of chapter 8.4.4
// Written by Goodstar Ohia
// Date: 03-12-2024

// Get some example uses of a version of Date so far to run. Define an output..
// operator << for Date.
#include <iostream>
using namespace std;

// provide a Date type
class Date {
public:
	Date(int yy, int mm, int dd); // check for valid Date and initialize

	int year()
	{
		return y;
	}

	int month()
	{
		return m;
	}

	int day()
	{
		return d;
	}

	void add_day(int n);	// increase Date by n days

private:
	int y, m, d;		// year, month, day
};


/**
 * Date - check for valid date and initialize
 * @yy: first argument
 * @mm: second argument
 * @dd: third argument
 *
 */
Date::Date(int yy, int mm, int dd)
	: y{yy}, m{mm}, d{dd}
{
}


/**
 * operator<< - define output operator<< for Date
 * @os: output argument
 * @d: contains value
 *
 * Return: Date (in Date format: y/m/d)
 */
ostream& operator<<(ostream& os, Date d)
{
	return os << d.year() << '/' << d.month() << '/' << d.day();
}


/**
 * main - entry point
 *
 * Return: 0
 */
int main()
{
	Date today {2024, 12, 3};
	Date tomorrow {2024, 12, 6};

	cout << today << " and " << tomorrow << endl;
	return 0;
}
