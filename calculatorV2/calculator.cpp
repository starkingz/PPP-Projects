#include "main.h"
#include <iostream>
using namespace std;

/*******************************************************************************************
 * calculate_two_numbers - Calculates two numbers(double/integer) according to the read operation sign
 * @num1: First integer input
 * @sign: Operation sign input
 * @num2: Second integer input
 * 
 * Return: result
*********************************************************************************************/

double calculate_2_numbers(double num1, char sign, double num2)
{
	double result;
	if (sign == '+') {
		result = num1 + num2;
		return result;
	}
	else if (sign == '-') {
		result = num1 - num2;
		return result;
	}
	else if (sign == '*') {
		result = num1 * num2;
		return result;
	}
	else if (sign == '/') {
		result = num1 / num2;
		return result;
	}
	else
	return 0;
}