// Originally written by Ohia Goodstar
// Chapter 8 - Technicalities - functions, etc.
// Exercise 5
// Date: 12.09.2024
#include "chapter8header.h"

/**
 * rev1 - reverse the order of elements in vector<int> without changing its
 * ... original vector
 * @v1: vector with old order
 * @v2: vector with new order (reversed vector)
 *
 * Return: nothing
 */
void rev1(vector <int> v1, vector <int>& v2)
{
	int len = v1.size();

	for (int i = len - 1; i >= 0; i--) {
		v2.push_back(v1[i]);
	}
}

/**
 * rev2 - reverse the order of elements in vector<int> of same vector
 * @v: vector to reverse and be reversed
 *
 * Return: nothing
 */
void rev2(vector <int>& v)
{
	int len = v.size();

	for (int i {0}; i < len / 2; i++) {
		swap(v[i], v[len - 1 - i]);
	}
}

/**
 * rev3 - return reversed order of elements in vector<int>
 * @v: vector to reverse
 *
 * Return: v
 */
vector <int> rev3(const vector <int>& v)
{
	int len = v.size();
	vector <int> v2;

	for (int i {len - 1}; i >= 0; i--) {
		v2.push_back(v[i]);
	}
	return v2;
}
