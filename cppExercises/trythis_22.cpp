// Written by Ohia Goodstar
// Try this of chapter 8.6 (PP3)
// Date: 9 - 12 - 2024
// Write, compile and run small example (in PP3 chapter 8.6) using increment...
// ... operator (++) and output operator (<<) for Month.
#include <iostream>
#include <vector>

// list of months of the year
enum class Month {
	jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};


/**
 * to_int - convert from Month to int
 * @m: value to convert
 *
 * Return: int(m)
 */
int to_int(Month m)
{
	return static_cast<int>(m);
}

/**
 * operator++ - overload increment operator for Month
 * @m: value to increment
 *
 * Return: incremented m
 */
Month& operator++(Month& m)
{
	if (m == Month::dec)	// wrap around
		m = Month::jan;
	else
		m = Month(to_int(m) + 1);
	return m;
}


/**
 * operator<< - overload output operator for Month
 * @os: output
 * @m: value to print
 *
 * Return: m to stdout
 */
std::ostream& operator<<(std::ostream& os, Month& m)
{
	std::vector <std::string> month_tbl {"Not a month", "January",
		"Febreury", "March", "April", "May", "June", "July", "August",
		"September", "October", "November", "December"};

	return os << month_tbl[to_int(m)];
}

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main()
{
	std::cout << "A simple program that defines pre-increment and output "
		  << "operator for an enum class to print Months of the year\n";
	Month m1 {Month::dec};

	for (int i = 1; i <= 12; i++) {
		std::cout << ++m1 << std::endl;
	}

	// for windows console
	std::cout << "Enter ~ to exit: \n";
	for (char c; std::cin >> c && c != '~';);
	return 0;
}
