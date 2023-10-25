#include "std_lib_facilities.h" // external library


int area(int length, int width);

int area(int length, int width)
{
        return length * width;
}

// // COMPILE TIME ERRORS - test for syntax errors
// int main()
// {
//         int s1 = area(7;        // error: ) missing
//         int s2 = area(7)        // error: ; missing
//         Int s3 = area(7);       // error: Int is not a type
//         int s4 = area('7);      // error: non-terminated character (' missing)
// }

// // COMPILE TIME ERRORS - test for type errors
// int main()
// {
//         int x0 = arena(7);              // error: undeclared function
//         int x1 = area(7);               // error: wrong number of argument
//         int x2 = area("7, 2");          // error: 1st argument is a string literal
//         int x3 = area(7, 3, 5);         // error: excess arguments and 1st argument is a char literal
//         int x4 = area('944', '0');      // error: arguments in char literal
//         int x5 = area(20.3, 20.5);      // OK: but it reads only the whole number
//         char x6 = area(1000, 9998);     // OK: but it truncates the result
// }

// RUNTIME ERRORS
int framed_area(int x, int y)
{
        return area(x - 2, y - 2);
}

int main()
{
        int x = -1;
        int y = 2;
        int z = 4;

        int area1 = area(x, y);
        int area2 = framed_area(1, y);
        int area3 = framed_area(y, z);
        double ratio = double(area1)/area3
}

// /**
//  * area - calculate the area of a rectangle
//  * 
//  * Return: result
// */
// int area(int length, int width)
// {
//         if (length <= 0 || width <= 0)
//         error("area() pre-condition(input only positive values)");
//         int a = length * width;

//         if (a <= 0)
//         error("area() post-condition (area has only postive results)");

//         return a;
// }

// /**
//  * main - entry point
//  * 
//  * Return: 0
// */
// int main()
// {
//         cout << "Calculate the area of a rectangle: \n";
//         int width {0};
//         cout << "Enter width: \n";
//         cin >> width;
        
//         int length {0};
//         cout << "Enter length: \n";
//         cin >> length;

//         int a = area(width, length);

//         cout << "Area == " << a << endl;
// }