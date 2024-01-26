// Uncomment code segment to use
// 24/01/2024

//PSEUDO CODE - process of writing code
// read a line
// calculate
// result

#include "std_lib_facilities.h"

/**
 * main - firt expression calculator attempt
 * 
 * Return: Always 0
*/
// int main()
// {
//         int lval;
//         int rval;
//         char op;
//         int result {0};
//         cout << "Enter an expression (+ or -): ";
//         cin >> lval >> op >> rval;

//         if (op == '+')
//                 result = lval + rval;   // addition
//         else if (op == '-')
//                 result = lval - rval;   // subtraction
//         else
//                 error("We can only handle + or -\n");   // from lib
        
//         cout << "Result: " << result << endl;

//         return 0;
// }

/**
 * main - clean up the previous code and let the program handle +, -, * and /
 * 
 * Return: Always 0
*/
// int main()
// try
// {
//         cout << "Please enter expression (we can handle +, -, * and /)\n";
//         cout << "Add x to end expression: ";
//         int lval {0};
//         cin >> lval;
//         if (!cin)
//                 error("No first operand");
//         int rval;

//         for (char op; cin >> op;)
//         {
//                 if (op != 'x')
//                         cin >> rval;
//                 if (!cin)
//                         error("No second operand");
                
//                 switch (op)
//                 {
//                         case '+':
//                         lval += rval;
//                         break;
//                         case '-':
//                         lval -= rval;
//                         break;
//                         case '*':
//                         lval *= rval;
//                         break;
//                         case '/':
//                         lval /= rval;
//                         break;
//                         default:
//                         cout << "Result: " << lval << endl;
//                         cout << "===== END OF EXPRESSION =====\n";
//                         keep_window_open("~");
//                         return 0;
//                 }
//         }
// }
// catch (runtime_error& e) {
//         cerr << e.what() << endl;
//         keep_window_open("~");
//         return 1;
// }
// catch (...) {
//         cerr << "Something went wrong\n";\
//         keep_window_open("~");
//         return 2;
// }

/**
 * main - check how Tokens work
 * 
 * Return: Always 0
*/
int main()
{
        class Token {
                public:
                        char kind;
                        double value;
        };

        Token t;
        t.kind = '+';

        Token t2;
        t2.kind = '8';
        t2.value = 3.14;

        Token tt = t;

        if (tt.kind != t.kind)
                error("impossible");
        t = t2;

        cout << t.value << endl;
}