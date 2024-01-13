// A simple calculator that calculates numbers according to signs
#include <iostream>
using namespace std;

int main()
{   
    char response;
    int result = 0;
    cout << "Enter first number, followed by a sign and second number: ";
    int fir_num, sec_num;
    char sign = 0;
    cin >> fir_num >> sign >> sec_num;
    // cout << "Enter second number: ";
    // int sec_num = 0;
    // cin >> sec_num;

    switch (sign)
    {
        case '+':
        result = fir_num + sec_num;
        cout << "Result == " << result << ", Would you like to continue (y or n)?" << endl;
        cin >> response;
        break;
        case '-':
        result = fir_num - sec_num;
        cout << "Result == " << result << ", Would you like to continue (y or n)?" << endl;
        cin >> response;
        break;
        case '*':
        result = fir_num * sec_num;
        cout << "Result == " << result << ", Would you like to continue (y or n)?" << endl;
        cin >> response;
        break;
        case '/':
        result = fir_num / sec_num;
        cout << "Result == " << result << ", Would you like to continue (y or n)?" << endl;
        cin >> response;
        break;
        default:
        cout << "Invalid input, try again!\n";
        break;
    }
    
    if (response == 'y')
    {
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
        cin >> fir_num >> sign >> sec_num;
    }
    else
        cout << "Incorrect response\n";
    return 0;
}