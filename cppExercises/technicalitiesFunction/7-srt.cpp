// Originally written by Ohia Goodstar
// Chapter 8 - Technicalities - functions, etc.
// Exercise 5
// Date: 26.09.2024
#include "chapter8header.h"

// Disclaimer: This function can utter values of its callee arguments
/**
 * srt - sort names and sort ages in right order using sorted names
 * @names: unsorted names
 * @ages: ages vector to sort
 *
 * Return: nothing
 */
void srt(vector <string>& names, vector <double>& ages)
{
	vector <string> cpy;

	cpy = names;
	sort(names.begin(), names.end()); // sort alphabetically

	int len1 = cpy.size();
	int len2 = ages.size();
	vector <double> sorted_ages(len1);

	if (len1 != len2)
		error("srt() - wrong sizes");

	for (int i = 0; i < len1; i++) {
		for (int cp = 0; cp < len1; cp++) {
			if (names[i] == cpy[cp]) {
				sorted_ages[i] = ages[cp]; // swap to right
			                                // order of sorted names
				cpy[cp] = "NoName"; // change current name to
				                    // allow duplicates
				break;
			}
		}
	}
	ages = sorted_ages;	// set unsorted ages to sorted ages
}
