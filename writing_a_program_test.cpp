#include "std_lib_facilities.h"

int main()
{
        int lval;
        int rval;
        char op;
        int result {0};
        cout << "Enter an expression (+ or -): ";
        cin >> lval >> op >> rval;

        if (op == '+')
                result = lval + rval;   // addition
        else if (op == '-')
                result = lval - rval;   // subtraction
        else
                error("We can only handle + or -\n");   // from lib
        
        cout << "Result: " << result << endl;

        return 0;
}