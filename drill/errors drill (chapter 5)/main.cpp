#include "../../std_lib_facilities.h"

// /**
//  * main - insert code fragments into code frame (1.)
//  * 
//  * Return: always 0 (success)
// */

// int main()
// try
// {
//         cout << "Success!\n";   // Cout << "Success!\n";
//         keep_window_open();
//         return 0;
// }
// catch (exception& e) {
//         cerr << "error: " << e.what() << '\n';
//         keep_window_open();
//         return 1;
// }
// catch (...) {
//         cerr << "Oops! unknown exception\n";
//         keep_window_open();
//         return 2;

// }


// /**
//  * main - insert code fragments into code frame (2.)
//  * 
//  * Return: always 0 (success)
// */

// int main()
// try
// {
//         cout << "Success!\n";   // cout << "Success!\n;
//         keep_window_open();
//         return 0;
// }
// catch (exception& e) {
//         cerr << "error: " << e.what() << '\n';
//         keep_window_open();
//         return 1;
// }
// catch (...) {
//         cerr << "Oops! unknown exception\n";
//         keep_window_open();
//         return 2;

// }

// /**
//  * main - insert code fragments into code frame (3.)
//  * 
//  * Return: always 0 (success)
// */

// int main()
// try
// {
//         cout << "Success" << "!\n";     // cout << "Success" << !\n"
//         keep_window_open();
//         return 0;
// }
// catch (exception& e) {
//         cerr << "error: " << e.what() << '\n';
//         keep_window_open();
//         return 1;
// }
// catch (...) {
//         cerr << "Oops! unknown exception\n";
//         keep_window_open();
//         return 2;

// }


// /**
//  * main - insert code fragments into code frame (4.)
//  * 
//  * Return: always 0 (success)
// */

// int main()
// try
// {
//         string success {"Success!"};
//         cout << success << '\n';     // cout << success << '\n';
//         keep_window_open();
//         return 0;
// }
// catch (exception& e) {
//         cerr << "error: " << e.what() << '\n';
//         keep_window_open();
//         return 1;
// }
// catch (...) {
//         cerr << "Oops! unknown exception\n";
//         keep_window_open();
//         return 2;

// }


// /**
//  * main - insert code fragments into code frame (5.)
//  * 
//  * Return: always 0 (success)
// */

// int main()
// try
// {
//         // fragment5 - string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
//         int res = 7;

//         vector<int> v(10);
//         v[5] = res;
//         cout << "Success!\n";
//         keep_window_open();
//         return 0;
// }
// catch (exception& e) {
//         cerr << "error: " << e.what() << '\n';
//         keep_window_open();
//         return 1;
// }
// catch (...) {
//         cerr << "Oops! unknown exception\n";
//         keep_window_open();
//         return 2;

// }


// /**
//  * main - insert code fragments into code frame (6.)
//  * 
//  * Return: always 0 (success)
// */

// int main()
// try
// {
//         // fragment6 - string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
//         vector<int> v(10);
//         v[5] = 7; 
//         if (v[5] == 7)
//         cout << "Success!\n";
//         keep_window_open();
//         return 0;
// }
// catch (exception& e) {
//         cerr << "error: " << e.what() << '\n';
//         keep_window_open();
//         return 1;
// }
// catch (...) {
//         cerr << "Oops! unknown exception\n";
//         keep_window_open();
//         return 2;
// }

// /**
//  * main - insert code fragments into code frame (7.)
//  * 
//  * Return: always 0 (success)
// */

// int main()
// try
// {
//         // fragment7 - if (cond) cout << "Success!\n"; else cout << "Fail!\n";
//         int cond {1};
//         if (cond)
//                 cout << "Success!\n"; 
//         else
//                 cout << "Fail!\n";
//         keep_window_open();
//         return 0;
// }
// catch (exception& e) {
//         cerr << "error: " << e.what() << '\n';
//         keep_window_open();
//         return 1;
// }
// catch (...) {
//         cerr << "Oops! unknown exception\n";
//         keep_window_open();
//         return 2;
// }


// /**
//  * main - insert code fragments into code frame (8.)
//  * 
//  * Return: always 0 (success)
// */

// int main()
// try
// {
//         // fragment8 - bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
//         bool c = true; 
//         if (c) 
//         cout << "Success!\n"; else cout << "Fail!\n";
//         keep_window_open();
//         return 0;
// }
// catch (exception& e) {
//         cerr << "error: " << e.what() << '\n';
//         keep_window_open();
//         return 1;
// }
// catch (...) {
//         cerr << "Oops! unknown exception\n";
//         keep_window_open();
//         return 2;
// }


/**
 * main - insert code fragments into code frame (8.)
 * 
 * Return: always 0 (success)
*/

int main()
try
{
        // fragment9 - string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
        string s = "ape";
        bool c = "fool";

         if (c) 
                cout << "Success!\n";
        keep_window_open();
        return 0;
}
catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        keep_window_open();
        return 1;
}
catch (...) {
        cerr << "Oops! unknown exception\n";
        keep_window_open();
        return 2;
}
