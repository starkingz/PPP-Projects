#include "../../std_lib_facilities.h"
#include "Average.h"		/* to access Average type */

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

/**
 * calws - calculate weighted sum
 * Description: scores of alternatives are multiplied by the weightings and...
 * ...summed to calculate the overall performance
 * @rating: evaluated point values based on the criteria
 * @weighting: co-efficient assigned to each criterion
 *
 * Return: sum of all
 */
double calws(const vector <double>& rating, const vector<double>& weighting);

/**
 * maxv - return largest element of a vector argument
 * @v: vector that holds largest element
 *
 * Return: largest element
 */
double maxv(const vector<double>& v);

/**
 * maxv2 - An alternative solution of maxv() function
 * @v: vector to sort
 *
 * Return: (last)th element
 */
double maxv2(vector<double>& v);

/**
 * minv - find smallest element of a vector argument
 * @v: a read-only vector-of-double that holds elements
 *
 * Return: smallest element
 */
double minv(const vector<double>& v);

/**
 * meanv- compute the mean of the data set
 * Description: sum of all values in the data set divided by the total..
 * ..number of values.
 * @set: a read-only vector-of-double that holds data set
 *
 * Return: mean value
 */
double meanv(const vector<double>& set);

/**
 * midv - compute the median of the data set
 * Description: A value with half the data set higher and half less than it
 * @set: a read-only vector-of-double that holds data set
 *
 * Return: median value
 */
double midv(const vector<double>& set);

/**
 * average - return a struct of all the computed results
 * @v: a read-only vector-of-double that holds data set
 *
 * Return: all computed results
 */
Average average(const vector<double>& v);

/**
 * get_average - pass all results through reference arguments
 * @v: a read-only vector-of-double that holds data set
 * @smallest: pass back smallest element of a vector
 * @largest: pass back largest element of a vector
 * @mean: pass back mean value of the data set
 * @median: pass back median value of the data set
 *
 * Return: nothing
 */
void get_average(const vector<double>& v, double& smallest, double& largest,
		  double& mean, double& median);
