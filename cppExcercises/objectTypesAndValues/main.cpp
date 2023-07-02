//Chapter 3: All Object Types and Values Excercises. Uncomment each set to execute
#include <iostream>
#include <string>
using namespace std;

/**
 * converting miles to kilometers
*/
// int main(){
//     double kilometer_num;

//     std::cout << "Enter a number of miles: "; //Prompt
//     double miles_num = 0;
//     std::cin >> miles_num;

//     kilometer_num = miles_num * 1.609;

//     std::cout << miles_num << " miles == " << kilometer_num << " km\n";
// }

/* Checking the reaction of the compiler with illegal and legal names*/
// int main()
// {
//     int float = 0;
//     cout << float;
// }

/*************************************************************************
* A program that checks for largest, smallest,
* sum, product, difference and ratio between two integer numbers.  
**************************************************************************/
// int main(){
//     cout << "Enter two integers: ";
//     int val1, val2;
//     cin >> val1 >> val2;

//     if (val1 > val2)
//     cout << "Largest value: " << val1 << endl;
//     else 
//     cout << "Largest value: " << val2 << endl;
//     if (val1 < val2)
//     cout << "Smallest value: " << val1 << endl;
//     else
//     cout << "Smallest value: " << val2 << endl;
//     if (val1 == val2)
//     cout << "Similar value: " << val1 << " " << val2 << endl;
    
//     cout << "Sum == " << val1 + val2 << endl;
//     cout << "difference == " << val1 - val2 << endl;
//     cout << "product == " << val1 * val2 << endl;
//     cout << "Ratio == " << val1/2 + val2/2 << endl;
//     return 0;
//     }

/******************************************************************
* Program that checks for smallest, largest,
* the sum, the difference, the product 
* and ratio of two floating-point values 
******************************************************************/

int main(){
    cout << "Enter two floating-point value: ";
    double val1, val2 = 0;
    cin >> val1 >> val2;

        if (val1 > val2)
    cout << "Largest value: " << val1 << endl;
    else 
    cout << "Largest value: " << val2 << endl;
    if (val1 < val2)
    cout << "Smallest value: " << val1 << endl;
    else
    cout << "Smallest value: " << val2 << endl;
    if (val1 == val2)
    cout << "Similar value: " << val1 << " " << val2 << endl;
    
    cout << "Sum == " << val1 + val2 << endl;
    cout << "difference == " << val1 - val2 << endl;
    cout << "product == " << val1 * val2 << endl;
    cout << "Ratio == " << val1 << ":" << val2 << endl;
    return 0;
}

/***********************************************************************
 *  Program that prompts the user to enter three integers
 *  and outputs them from smallest to largest with a comma and space
************************************************************************/
// int main(){
//     cout << "Enter three integer value: ";
//     int val1, val2, val3;
//     cin >> val1 >> val2 >> val3;

//     if ((val1 <= val2 && val1 <= val3 && val2 <= val3))
//     cout << val1 << ", " << val2 << ", " << val3 << endl;
//     else if ((val1 <= val2 && val1 <= val3 && val3 <= val2))
//     cout << val1 << ", " << val3 << ", " << val2 << endl;
//     else if ((val2 <= val1 && val2 <= val3 && val3 <= val1))
//     cout << val2 << ", " << val3 << ", " << val1 << endl;
//     else if ((val2 <= val1 && val2 <= val3 && val1 <= val3))
//     cout << val2 << ", " << val1 << ", " << val3 << endl;
//     else if ((val3 <= val2 && val3 <= val1 && val1 <= val2))
//     cout << val3 << ", " << val1 << ", " << val2 << endl;
//     else if ((val3 <= val2 && val3 <= val1 && val2 <= val1))
//     cout << val3 << ", " << val2 << ", " << val1 << endl;

//     return 0;
// }

/*************************************************
 * main - Asks the user to enter three words .. 
 * .. and arranges it alphabetically with ..
 * .. a comma and space
 * Return: 0 Always (success)
*************************************************/
// int main(){
//     cout << "Enter three string values: (separated by a space)\n";
//     string str_val1, str_val2, str_val3;
//     cin >> str_val1 >> str_val2 >> str_val3;

//     if (str_val1 < str_val2 && str_val1 < str_val3 && str_val2 < str_val3)
//     cout << str_val1 << ", " << str_val2 << ", " << str_val3 << "\n";
//     else if (str_val1 < str_val2 && str_val1 < str_val3 && str_val3 < str_val2)
//     cout << str_val1 << ", " << str_val3 << ", " << str_val2 << "\n";
//     else if (str_val2 < str_val1 && str_val2 < str_val3 && str_val1 < str_val3)
//     cout << str_val2 << ", " << str_val1 << ", " << str_val3 << "\n";
//     else if (str_val2 < str_val1 && str_val2 < str_val3 && str_val3 < str_val1)
//     cout << str_val2 << ", " << str_val3 << ", " << str_val1 << "\n";
//     else if (str_val3 < str_val1 && str_val3 < str_val2 && str_val1 < str_val2)
//     cout << str_val3 << ", " << str_val1 << ", " << str_val2 << "\n";
//     else if (str_val3 < str_val1 && str_val3 < str_val2 && str_val2 < str_val1)
//     cout << str_val3 << ", " << str_val2 << ", " << str_val1 << "\n";

//     return 0;
// }

/****************************************************
 * main - program to test an integer value to ..
 * .. determine if its an odd or even number
 * Return: 0 Always (success)
*****************************************************/

// int main()
// {
//     cout << "Enter an integer value: ";
//     int num;
//     while (cin >> num)
//     {
//         if (num % 2 == 0)
//         cout << "The value of " << num << " is an even number\n";
//         else
//         cout << "The value of " << num << " is an odd number\n";
//     }
//     return 0;
// }

/*************************************************
 * main - program that converts spelled ..
 * .. out numbers such as "zero" and "two" ..
 * .. into digits, such as 0 and 2 respectively
 * Return: 0 (success)
**************************************************/

// int main(){
//     cout << "Enter a number from 0 to 4: ";
//     int num = 0;

//     while(cin >> num){
//     if (num == 0)
//     cout << "zero\n";
//     else if (num == 1)
//     cout << "one\n";
//     else if (num == 2)
//     cout << "two\n";
//     else if (num == 3)
//     cout << "three\n";
//     else if (num == 4)
//     cout << "four\n";
//     else
//     cout << "not a number i know\n";
//     }
//     return 0;
// }

/**
 * main - calculate two operands according to the operator
 * 
 * Return: 0;
*/
// int main(){
//     string operation = "";
//     cout << "Enter an operator followed by two operands: \n";
//     double num, num2;
//     cin >> operation >> num >> num2;
    
//     if (operation == "+")
//     cout << num + num2 << endl;
//     else if (operation == "-")
//     cout << num - num2 << endl;
//     else if (operation == "*")
//     cout << num * num2 << endl;
//     else if (operation == "/")
//     cout << num / num2 << endl;

//     return 0;
// }