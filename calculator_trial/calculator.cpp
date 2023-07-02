//Function that takes the operation sign and calculates two integers
#include "main.h"
#include <iostream>
using namespace std;

int calculate_2_numbers(int fir_num, char sign, int sec_num)
{
    int result = 0;

    switch (sign)
    {
        case '+':
        result = fir_num + sec_num;
        return result;
        break;
        case '-':
        result = fir_num - sec_num;
        return result;
        break;
        case '*':
        result = fir_num * sec_num;
        return result;
        break;
        case '/':
        result = fir_num / sec_num;
        return result;
        break;
        default:
        return 0;
        break;
    }
}