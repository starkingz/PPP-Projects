#include "../../std_lib_facilities.h"

/**
 * print - print a vector of ints to output
 * @v: store sequence of ints
 * @s: label output
 *
 * Return: nothing
 */
void print(vector <int> v, std::string s);

/**
 * fibonacci - store sequences of elements in vector <int> v whereby elements...
 * ...is the sum of the two previous elements. accept real numbers
 * @x: first element of v
 * @y: second element of v
 * @v: vector to store sum of previous numbers
 * @n: number of elements to put into v
 *
 * Return: nothing
 */
void fibonacci(int x, int y, vector <int>& v, int n);

/**
 * rev1 - reverse the order of elements in vector<int> without changing its
 * ... original vector
 * @v1: vector with old order
 * @v2: vector with new order (reversed vector)
 *
 * Return: nothing
 */
void rev1(vector <int> v1, vector <int>& v2);

/**
 * rev2 - reverse the order of elements in vector<int> of same vector
 * @v: vector to reverse and be reversed
 *
 * Return: nothing
 */
void rev2(vector <int>& v);

/**
 * rev3 - return reversed order of elements in vector<int>
 * @v: vector to reverse
 *
 * Return: v
 */
vector <int> rev3(const vector <int>& v);

/**
 * string_rev1 - reverse sequence of string stored in a vector
 * @s1: vector to reverse
 *
 * Return: nothing
 */
void string_rev1(vector <string>& s1);

/**
 * string_rev2 - reverse sequence of string stored in a vector
 * @s: vector to reverse
 *
 * Return: nothing
 */
void string_rev2(vector <string>& s);

/**
 * string_rev3 - reverse sequence of string stored in a vector
 * @s1: vector to reverse
 *
 * Return: s2
 */
vector <string> string_rev3(const vector <string>& s1);

/**
 * print_string - prints a vector of string to output
 * @str: vector to print
 * @s: used for labeling
 *
 * Return: nothing
 */
void print_string(vector <string> str, const string s);

/**
 * get_input - read {name, age} in pairs and put them into vector names and ages
 * @names: vector to put *name* value into
 * @ages: vector to put *age* value into
 *
 * Return: nothing
 */
void get_input(vector <string>& names, vector <double>& ages);

/**
 * printd - output two labelled vectors to stdout
 * @s: holds string values
 * @d: holds floating-point values
 * @label: holds description of s and d
 *
 * Return: nothing
 */
void printd(const vector <string>& s, const vector <double>& d, string label);

/**
 * srt - sort names and sort ages in right order using sorted names
 * @names: unsorted names
 * @ages: ages vector to sort
 *
 * Return: nothing
 */
void srt(vector <string>& names, vector <double>& ages);
