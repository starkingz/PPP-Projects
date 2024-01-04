// Chapter 5 - Errors
// Excercise 11
// Date: 4/1/2023
// #include "../../std_lib_facilities.h" // external library
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * error - print runtime error message to stdout
*/
void error(string s)
{
        throw runtime_error(s);
}

/**
 * get_fib - find the largest fibonnaci number that can fits in an int
 * @number: argument to know the size of the loop
 * 
 * Return: void
*/
void get_fib(int number)
{
        int prev = 1;
        int prevcurr = 1;
        int curr = 1;
        int i;

        if (number <= 0)
                error("get_fib() - Number can't be less or equals 0");
        
        cout << prev << endl << prevcurr << endl;

        for (i = 1; i <= number; ++i)
        {
                curr = prevcurr + prev;

                cout << curr << "\n";
                prev = prevcurr;
                prevcurr = curr;

                if (curr < 0)
                {
                        cout << "Found largest fibonnaci number that fits in an int: " << prev << endl;
                        break;
                }
        }
}

/**
 * main - print the fibonnaci numbers base on the size
*/
int main()
{
        cout << "Enter a number to determine the size of the loop: ";
        int number = 0;
        cin >> number;

        get_fib(number);

        return 0;
}