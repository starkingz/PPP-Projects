// Originally written by Ohia Goodstar
// Chapter 8 - Technicalities - functions, etc.
// Exercise 8 - improved version of exercise 7
// Date: 27.09.2024
#include "chapter8header.h"
// This program accepts all sorts of names, bad names not defined yet.
// To take this program further i would have to define what is considered a good
// name and a bad name. This can be implemented in get_input() function.
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main()
try {
	vector <string> names;
	vector <double> ages;

	std::cout << "Please enter pairs of first names and ages: "
		  << "\t(Use NoName 0 to end input)\n";
	get_input(names, ages);

	string label {"Unordered Data (name, age)"};

	printd(names, ages, label);
	srt(names, ages);	// sort names and ages in right order

	label = "\nOrdered Data (name, age)";
	printd(names, ages, label);

	keep_window_open("~");	// for windows

	return 0;
}
catch (runtime_error& e) {
	cerr << "error: " << e.what() << endl;
	keep_window_open("~~");	// for windows
	return 1;
}
catch (exception& e) {
	cerr << "error: " << e.what() << endl;
	keep_window_open("~~");	// for windows
	return 2;
}
catch (...) {
	cerr << "something went wrong\n";
	keep_window_open("~~");
	return 3;
}
