// Originally written by Ohia Goodstar
// Chapter 8 - Technicalities - functions, etc.
// Exercise 5
// Date: 26.09.2024
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

	if (!(std::cin >> name >> age))
		error("Bad input");
	names.push_back(name);
	ages.push_back(age);
}
