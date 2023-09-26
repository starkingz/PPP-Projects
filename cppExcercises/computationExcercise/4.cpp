// Chapter 4 - Computation
// Excercise 5
// Date: 25/09/2023
#include <iostream>
#include <vector>
using namespace std;

/**
 * compute2values - read three arguments and calcualate two numbers
 * @val1: first argument
 * @val2: second argument
 * @oper_sign: character to represent operation
 * 
 * Return: computed value
*/

// function declaration
double calc2val(double, double, char);

// function definition
double calc2val(double val1, double val2, char oper_sign)
{
        double result {0};
        vector <char> signs {'+', '-', '*', '/'};

        // compute two values
        if (oper_sign == signs[0])
        result = val1 + val2;
        else if (oper_sign == signs[1])
        result = val1 - val2;
        else if (oper_sign == signs[2])
        result = val1 * val2;
        else if (oper_sign == signs[3])
        result = val1 / val2;
        else
        result = 0;

        return result;
}

/**
 * main - Entry point
*/
int main()
{
        double val1 {0};
        double val2 {0};
        char oper_sign {' '};

        cout << "Enter two values followed by an operator sign: \n";
        cin >> val1 >> val2 >> oper_sign;

        double result {0};
        // function call
        result = calc2val(val1, val2, oper_sign);

        cout << "The sum of " << val1 << " and "
             << val2 << " is " << result << endl;
        
        return 0;
}