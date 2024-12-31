#include "chapter8header.h"

/**
 * main - entry point (test functions implementation)
 *
 * Return: Always 0 (success)
 */
int main()
{
	vector <std::string> strs1;
	vector <std::string> strs2;
	vector <std::string> strs3;
	std::string str;

	std::cout << "A simple program that reverses a sentence\n";
	std::cout << "Enter a sentence (stop with |): ";

	while (std::cin >> str && str != "|") { // break when input see's |
		strs1.push_back(str);
		strs2.push_back(str);
		strs3.push_back(str);
	}

	std::string label1 {"Original Sequence"};
	std::string label2 {"Reversed Sequence"};

	std::cout << "Implementation for string_rev1()\n";
	print_string(strs1, label1);
	string_rev1(strs1);
	print_string(strs1, label2);

	std::cout << "\nImplementation for string_rev1()\n";
	print_string(strs2, label1);
	string_rev2(strs2);
	print_string(strs2, label2);

	std::cout << "\nImplementation for string_rev1()\n";
	print_string(strs3, label1);
	strs3 = string_rev3(strs3);
	print_string(strs3, label2);

	return 0;
}
