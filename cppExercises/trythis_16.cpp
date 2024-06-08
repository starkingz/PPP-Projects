#include "../std_lib_facilities.h"

/**
 * Compile some examples and see how the compiler responds
*/
// COMPILE TIME ERRORS - test for type errors
int area(int length, int width);
int area(int length, int width)
{
        return length * width; // compute the area of a rectangle
}

int main()
{
        int x0 = arena(7);              // error: undeclared function
        int x1 = area(7);               // error: wrong number of argument
        int x2 = area("7, 2");          // error: 1st argument is a string literal
}