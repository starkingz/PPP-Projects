#include <iostream>
#include "main.h"
using namespace std;

int main()
{
    char response = 0;
    int result = 0;
cout << "Enter first number, followed by a sign and second number: ";
int num1, num2;
char sign;
cin >> num1 >> sign >> num2;
result = calculate_2_numbers(num1, sign, num2);
cout << result << endl << "Would you like to continue (y or n)?\n";
cin >> response;

for (int i = 1; i <= 10; i++)
{
if (response == 'y')
    {
        result = calculate_2_numbers(num1, sign, num2);
        cout << "Enter a sign followed by the third number: ";
    int third_num;
    char sign2;
    cin >> sign2 >> third_num;

    switch (sign2)
    {
        case '+':
        cout << "Result == " << result + third_num << endl;
        break;
        case '-':
        cout << "Result == " << result - third_num << endl;
        break;
        case '*':
        cout << "Result == " << result * third_num << endl;
        break;
        case '/':
        cout << "Result == " << result / third_num << endl;
        break;
        default:
        cout << "Invalid input, try again!\n";
        break;
    }
    }
    else if (response == 'n')
    {
        cout << "Enter first number, followed by a sign and second number: ";
        cin >> num1 >> sign >> num2;
        result = calculate_2_numbers(num1, sign, num2);
        cout << result << endl << "Would you like to continue (y or n)?\n";
        cin >> response;
    }
    else
        cout << "Incorrect response\n";
}
return 0;
}