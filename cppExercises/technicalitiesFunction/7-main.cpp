// Originally written by Ohia Goodstar
// Chapter 8 - Technicalities - functions, etc.
// Exercise 5
// Date: 26.09.2024
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
	const int end_input {5};
	int count {0};

	std::cout << "Please enter five pairs (only) of names and ages: "
		  << "\t(Press ENTER key to print)\n";
	while (count != end_input) {
		get_input(names, ages);
		count++;
	}

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
	return 2;
}
catch (exception& e) {
	cerr << "error: " << e.what() << endl;
	keep_window_open("~~");	// for windows
	return 3;
}
catch (...) {
	cerr << "something went wrong\n";
	keep_window_open("~~");
	return 4;
}
