#include "chapter8header.h"

/**
 * print_string - prints a vector of string to output
 * @str: vector to print
 * @s: used for labeling
 *
 * Return: nothing
 */
void print_string(vector <string> str, const string s)
{
	int len = str.size();

	std::cout << s << ":" << std::endl << "{";

	for (int i = 0; i < len; i++) {
		std:: cout << str[i];
		if (i != len - 1)
			std::cout << ", ";
	}
	std::cout << "};" << endl;
}
