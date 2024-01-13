// Simple calculator
#include <iostream>
#include "main.h"
#include <iomanip>
using namespace std;

/**
 * main - Read numbers and calculate according to the inputted operation sign;
 * 
 * Return: 0 always (success)
*/

int main()
{
	double result = 0;
	char response;
	double new_result = 0;
	double new_num1 = 0;
	
	cout << "Enter first number: ";
	double num1 = 0;
	cin >> num1;

	cout << "choose a sign (+, -, *, /): ";
	char sign = 0;
	cin >> sign;
	cout << "Enter next number: ";
	double num2;
	cin >> num2;

    	result = calculate_2_numbers(num1, sign, num2);
    	cout << num1 << sign << num2 << " = " << result << endl;
	cout << "Do you want to continue calculating with " << result << "? (y / n / e [end])?\n";
	cin >> response;

    while (response != 'e') {
	if (response == 'y') {
		cout << "choose a sign (+, -, *, /): ";
	        cin >> sign;
	        cout << "Enter next number: ";
	        cin >> num2;
		new_result = result;
	        result = calculate_2_numbers(result, sign, num2);
           	cout << new_result << sign << num2 << " = " << result << endl; //			
	}
	else if (response == 'n') {
        	cout << "Enter first number: ";
        	cin >> new_num1;
		cout << "choose a sign (+, -, *, /): ";
		cin >> sign;
		cout << "Enter next number: ";
		cin >> num2; 
        	result = calculate_2_numbers(new_num1, sign, num2);
        	cout << new_num1 << sign << num2 << " = " << result << endl;
	}
	else if (response == 'e') {
		cout << "Goodbye!\n";
		break;
	} 
	else {
		cout << "Invalid response, try again!\n";
		// break;
	}
    		cout << "Do you want to continue calculating with " << result << "? (y / n / e [end])\n";
		cin >> response;
    }
	return 0;
}