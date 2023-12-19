#include "std_lib_facilities.h" // external library


// int area(int length, int width);

// int area(int length, int width)
// {
//         if (length <= 0 || width <= 0)
//         return 0;
//         return length * width;
// }

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
// int framed_area(int x, int y)
// {
//         return area(x - 2, y - 2);
// }

// int main()
// {
//         int x = -1;
//         int y = 2;
//         int z = 4;

//         int area1 = area(x, y);
//         int area2 = framed_area(1, z);
//         int area3 = framed_area(y, z);
//         double ratio = double(area1)/area3;

//         cout << "area1(" << area1 << ")\narea2(" << area2 << ")\n";
//         cout << "area3(" << area3 << ")\nratio(" << ratio << ")\n"; 
// }

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

// /**
//  * checking for argument errors
// */
// class Bad_area{};       // set error type

// // Area function must return a positive value
// int area(int length, int width)
// {
//         if (length <= 0 || width <= 0)
//                 throw Bad_area{};       // throw error to any function ready to catch
//         return length * width;
// }

// int framed_area(int x, int y)
// {
//         return area(x - 2, y - 2);
// }

// int main()
// try
// {
//          int x = -1;
//         int y = 2;
//         int z = 4;

//         int area1 = area(x, y);
//         int area2 = framed_area(1, z);
//         int area3 = framed_area(y, z);
//         double ratio = double(area1)/area3;

//         cout << "area1(" << area1 << ")\narea2(" << area2 << ")\n";
//         cout << "area3(" << area3 << ")\nratio(" << ratio << ")\n"; 
// }
// // catching throwned error from callee
// catch (Bad_area)
// {
//         cout << "Ops, bad argument!\n";
// }

// /**
//  * checking for range errors
// */

// int main()
// try
// {
//         vector <int> v;

//         cout << "Enter random integer values: ";
//         for (int x; cin >> x;)
//                 v.push_back(x); // put value into vector
        
//         int len = v.size();     // size of vector
//         for (int i = 0; i <= len; ++i)
//                 cout << "v[" << i << "]: " << v[i] << endl;     // print vector values
        
//         return 0;
// }
// catch (out_of_range)    // catch range error
// {
//         cerr << "Oops! Range error\n";
//         return 1;
// }
// catch (...)     // catch all other errors
// {
//         cerr << "Exception: Somethings wrong\n";
//         return 2;
// }

// void do_something()
// {
//         double d {0};

//         cout << "Enter only double values: ";
//         cin >> d;

//         if (!cin)
//                 error("could not read a double in do_something()\n");
        
//         cout << "Double read successfully\n";
// }

// int main()
// // try
// {
//         do_something();

//         return 0;
// }
// // catch (exception& e) {
// //         cerr << "runtime_error: " << e.what() << endl;
// //         // keep_window_open();  // terminate with any char
// //         return 1;
// // }
// // catch (...) {
// //         cerr << "Exception: something went wrong\n";
// //         return 2;
// // }

// // Testing for Bad input errors
// class Bad_input{};

// void trying_error()
// {
//         while (true) {
//         cout << "first input here: ";
//         double val {0.0};
//         cin >> val;

//         // throw incorrect data type error
//         if (!cin)
//                 throw Bad_input{};

//         cout << "second input here: ";
//         double val2 {0.0};
//         cin >> val2;

//         // throw incorrect data type error
//         if (!cin)
//                 throw Bad_input{};

//         cout << val + val2 << endl;
//         }

// }
// int main()
// try
// {
//         cout << "Enter a valid real number for addition: \n";
//         trying_error();

//         return 0;
// }
// catch (Bad_input) {
//         cerr << "Error: Wrong input, try again!!\n";
//         // trying_error();
//         return 1;
// }
// catch (...) {
//         cerr << "Error: Something went wrong\n";
//         return 2;
// }


/**
 * check for type narrowing
*/
// int main()
// try
// {
//         int x1 = narrow_cast <int> (2.0);
//         int x2 = narrow_cast <int> (3.9);
//         char x3 = narrow_cast <char> (1089);
//         char x4 = narrow_cast <char> (89);

//         error ("Error: Narrowing\n");
// }
// catch (exception& e) {
//         cout << "Error: " << e.what() << endl;
// }

// int main()
// {
//        // Logic Error: Prints infinite 0
//         int i = 0; while (i <= 10) cout << i; // Problem: No increament statement 
// }
// int main()
// {
//        vector <int> v(2);

//        v.push_back(5);
//        v.push_back(10);

//        cout << v[v.size()] << endl;
// }

// Testing pre-condition and post-condition
void print_out()
                {
                        cout << "Enter a condition to loop (int value): ";
                        int number {0};
                        cin >> number;
                        // throw err message if negative
                             if (number < 0)
                                        error("Negative value inputted\n");
                        for (int i = 0; i <= number; i++) {
                                int result = i * i;
                                //throw err message if the res is negative
                                if (result < 0)
                                        error("Negative value caught\n");
                                cout << "Result: " << result << endl;
                        }

                }
int main()
try
{
       print_out();

       return 0;
}
// catch all errors
catch(runtime_error& e) {
       cerr << "Error: " << e.what() << endl;
       return 1;
}
catch(...) {
       cerr << "Something went wrong" << endl;
       return 2;
}
