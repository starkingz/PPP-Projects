// Chapter 4 - Computation
// Excercise 7
// Date: 26/09/2023
// Modification of excercise 5
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

/**
 * compute2values - read three argument and compute base on the operator sign
 * @val1: first argument
 * @val2: second argument
 * @oper_sign: character to represent operator sign
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
 * word2digit - Read string value between 0 and 9 and convert to digit
 * @val: Input character
*/
// function declaration
int word2digit(string);

// function definition
int word2digit(string val)
{
        vector <string> words {"zero", "one", "two", "three", "four",
                              "five", "six", "seven", "eight", "nine"};
        vector <string> digits {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
        int digit = 0;

        int len = words.size() - 1;
        for (int i = len; i >= 0; i--) {
                if (val == words[i] || val == digits[i])
                digit = i;
        }

        return digit;
}

/**
 * setname - read operator sign and return the result name
 * @sign: name to set
*/
// function declaration
string set_result_name(char);

function definition
string set_result_name(char sign)
{
        string name {" "};
        switch (sign) {
                case '+':
                name = "sum";
                break;
                case '-':
                name = "difference";
                break;
                case '*':
                name = "product";
                break;
                case '/':
                name = "quotient";
                break;
                default:
                name = "NULL";
                break;
        }
        return name;
}

/**
 * main - accept (just) single-digit ...
 * ... numbers written as either digits or spelled out.
 * 
 * Return: 0 always
*/
int main()
{
        string strval1 {0};
        string strval2 {0};
        int val1 {0};
        int val2{0};
        char oper_sign {' '};

        cout << "Enter two single-digit values followed by an operator sign:";
        cout << " (either digits or spelled out) \n";
        cin >> strval1 >> strval2 >> oper_sign;

        int result {0};
        // function call
        val1 = word2digit(strval1);
        val2 = word2digit(strval2);

        // function call
        result = calc2val(val1, val2, oper_sign); // compute numbers

        string result_name {" "};
        // function call
        result_name = set_result_name(oper_sign);

        cout << "The " << result_name << " of " << val1 << " and "
             << val2 << " is " << result << endl;
        
        return 0;
}