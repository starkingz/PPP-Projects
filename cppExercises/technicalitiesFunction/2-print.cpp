// Chapter 8 - Technicalities - functions, etc.
// Exercise 2
// Date: 09.09.2024

#include "chapter8header.h"

/**
 * print - print vector of ints to output
 * @v: store sequence of ints
 * @s: label output
 *
 * Return: nothing
 */
void print(vector <int> v, std::string s)
{
	int len = v.size();

	std::cout << s << ":" << std::endl << "{";
	for (int i = 0; i < len; i++) {
		std::cout << v[i];
		if (i != len - 1)
			std::cout << ", ";
	}
	std::cout << "};" << std::endl;
}
