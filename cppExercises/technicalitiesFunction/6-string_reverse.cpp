// Originally written by Ohia Goodstar
// Chapter 8 - Technicalities - functions, etc.
// Solution for Exercise 5
// Date: 12.09.2024


// Write different versions of a reverse function with vector<string>
/*
  What i did here?
  Replace rev1(), rev2(), rev3() arguments from vector <int> to vector <string>
  in exercise 5 solution.
*/
#include "chapter8header.h"

/**
 * string_rev1 - reverse sequence of string stored in a vector
 * @s1: vector to reverse
 *
 * Return: nothing
 */
void string_rev1(vector <string>& s1)
{
	int len = s1.size();

	vector <string> s2;

	for (int i = len - 1; i >= 0; i--) {
		s2.push_back(s1[i]);
	}
	s1 = s2;
}

/**
 * string_rev2 - reverse sequence of string stored in a vector
 * @s: vector to reverse
 *
 * Return: nothing
 */
void string_rev2(vector <string>& s)
{
	int len = s.size();

	for (int i = 0; i < len / 2; i++) {
		swap(s[i], s[len - 1 - i]);
	}
}

/**
 * string_rev3 - reverse sequence of string stored in a vector
 * s1: vector to reverse
 *
 * Return: s2
 */
vector <string> string_rev3(const vector <string>& s1)
{
	int len = s1.size();
	vector <string> s2;

	for (int i = len - 1; i >= 0; i--) {
		s2.push_back(s1[i]);
	}
	return s2;
}

// Difference between string_rev1(), string_rev2(), string_rev3() function
// * string_rev1() returns no value, has a pass-by-reference vector <string>,...
// * ...creates a new vector <string> s2 to store reversed vector, then assign..
// * ... vector <string> s2 to pass-by-reference vector<string> s1.
//
// * string_rev2() returns no value, has a pass-by-reference vector <string>,...
// * ...uses std::swap() to swap two values from one end to the other of same...
// * ...vector <string> s1. It uses pass-by-reference to change values of the...
// * ...of the callee function vector<string>.
//
// * string_rev3() returns a vector <string> value, has a ...
// * ...const-by-pass-reference vector <string> which means its vector is...
// * ...read only, creates a new vector <string> s2 to store reversed vector...
// * ...and returns s2.
