// Originally written by Ohia Goodstar
// Chapter 8 - Technicalities - functions, etc.
// Exercise 8
// Date: 27.09.2024
#include "chapter8header.h"

/**
 * get_input - read {name, age} in pairs and put them into vector names and ages
 * @names: vector to put *name* value into
 * @ages: vector to put *age* value into
 *
 * Return: nothing
 */
void get_input(vector <string>& names, vector <double>& ages)
{
	string name {""};
	double age {0};
	const string end_input {"NoName"};

	while (cin >> name >> age) {
		if (name == end_input)
			return;
		if (age < 0)	// check for negative age value
			error("non-qualified age");
		names.push_back(name);
		ages.push_back(age);
	}
	error("Bad input"); // throw exception for bad input
}
