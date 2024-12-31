// Originally written by Ohia Goodstar
// Chapter 8 - Technicalities - functions, etc.
// Exercise 8
// Date: 27.09.2024
#include "chapter8header.h"

// Disclaimer: This function can utter values of its callee arguments
/**
 * srt - sort names in right order, thereafter use names to sort ages
 * @names: unsorted names
 * @ages: unsorted ages
 *
 * Return: nothing
 */
void srt(vector <string>& names, vector <double>& ages)
{
	vector <string> cpy = names; // take a copy of unsorted names

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
				cpy[cp] = "NoName"; // replace name with "NoName"
				                    // to allow name duplicates
				break;
			}
		}
	}
	ages = sorted_ages;	// set unsorted ages to sorted ages
}
