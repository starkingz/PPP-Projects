// Originally written by Ohia Goodstar
// Chapter 8 - Technicalities - functions, etc.
// Exercise 8
// Date: 27.09.2024
#include "chapter8header.h"

/**
 * printd - output two labelled vectors to stdout
 * @s: holds string values
 * @d: holds floating-point values
 * @label: holds description of s and d
 *
 * Return: nothing
 */
void printd(const vector <string>& s, const vector <double>& d, string label)
{
	int len1 = s.size();
	int len2 = d.size();

	if (len1 != len2)
		error("printna() - wrong sizes");

	std::cout << label << ":\n";

	for (int i = 0; i < len1; i++) { // output len1 by 2 table
		std::cout << '(' << s[i] << ", " << d[i] << ')' << endl;
	}
}
