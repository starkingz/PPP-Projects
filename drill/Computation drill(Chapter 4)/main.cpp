// Chapter 4 Computation Drill
// First drill 
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

/**
 * main - Reads two integers and prints them
 * Date: 7/15/2023
 * 
 * Return 0 always (success);
*/
// int main()
// {
//         int a, b;

//         while (cin >> a >> b){
//                 cout << a << endl << b << endl;
//         }
//         return 0;
// }

/**
 * main - Modify first drill
 * Description: print 'the smaller value is: ' ..
 * .. followed by the smallest number and print ..
 * .. 'the larger value is: ' followed by the  ..
 * .. larger number.
 * 
 * Return 0 always (success)
*/
// int main()
// {
//         int a, b;

//         while (cin >> a >> b){
//                 if (a < b) {
//                         cout << "The smaller value is: " << a << endl;
//                         cout << "The larger value is: " << b << endl;
//                 }
//                 else if (b < a) {
//                         cout << "The smaller value is: " << b << endl;
//                         cout << "The larger value is: " << a << endl;
//                 }
//         }
//         return 0;
// }

/**
 * main - modify second drill
 * Description: if two integers are the same print ..
 * .. 'the numbers are equal'
 * 
 * Return 0;
*/
// int main()
// {
//         int a, b;

//         while (cin >> a >> b){
//                 if (a < b) {
//                         cout << "The smaller value is: " << a << endl;
//                         cout << "The larger value is: " << b << endl;
//                 }
//                 else if (b < a) {
//                         cout << "The smaller value is: " << b << endl;
//                         cout << "The larger value is: " << a << endl;
//                 }
//                 else
//                 cout << "The numbers are equal" << endl;
//         }
//         return 0;
// }

/**
 * main - modify third drill
 * Description: Change the object type from int to double
 * 
 * Return: 0 always success
*/
// int main()
// {
//         double a, b;

//         while (cin >> a >> b){
//                 if (a < b) {
//                         cout << "The smaller value is: " << a << endl;
//                         cout << "The larger value is: " << b << endl;
//                 }
//                 else if (b < a) {
//                         cout << "The smaller value is: " << b << endl;
//                         cout << "The larger value is: " << a << endl;
//                         if (b == a - formula) {
//                         cout << "The numbers are almost equal\n";
//                         }
//                 }
//                 else
//                 cout << "The numbers are equal" << endl;
//         }
//         return 0;
// }

/**
 * main - modify fourth drill
 * Description: Write out 'The numbers are almost equal' after writing ..
 * .. out which is the smaller and larger if the two numbers differ by ..
 * .. less than 1.0/100
 * 
 * Return: 0  
*/
// int main()
// {
//         double a = 0, b = 0;
//         const double formula = 1.0 / 100;

//         while (cin >> a >> b){
//                 if (a < b) {
//                         cout << "The smaller value is: " << fixed << setprecision(2) << a << endl;
//                         cout << "The larger value is: " << fixed << setprecision(2) << b << endl;
//                         if (a == b - formula) {
//                                 cout << "The numbers are almost equal\n";
//                         }       
//                 }
//                 else if (b < a) {
//                         cout << "The smaller value is: " << fixed << setprecision(2) << b << endl;
//                         cout << "The larger value is: " << fixed << setprecision(2) << a << endl;
//                         if (b == a - formula) {
//                                 cout << "The numbers are almost equal\n";
//                         }
//                 }
//                 else
//                 cout << "The numbers are equal" << endl;
//         }
//         return 0;
// }
/**
 * main - write out largest number so far and smallest number so far
 * 
 * Return: 0
*/
int main()
{
        cout << "Enter a number: ";
        bool first = true;
        double largest = 0;
        double smallest = 0;
        double number = 0;
        
        while (cin >> number) { // for (double number; cin >> number;) -> /* altenative */
                // Assign first values and Write them out 
                if (first == true ) {
                        first = false;
                        smallest = number;
                        largest = number;
                        cout << number << " the largest so far\n";
                }
                else if (number > largest) {
                        largest = number; // new value?
                        cout << largest << " the largest so far\n";
                }
                else if (number < smallest) {
                        smallest = number; // new value?
                        cout << smallest << " the smallest so far\n";

                }
        }
}


// int main()
// {
//         cout << "-------------------- UNITS CONVERSION -------------------- \n";
//         cout << "Enter a value and unit: ";
//         double number = 0;
//         const double in = 2.54; // 1in = 2.54cm
//         const double m = 100; // 1m = 100cm
//         const double ft = 12; // 1ft == 12in
//         string unit = "";

//         while (cin >> number >> unit) {
//                 if (unit == "cm") {
//                         cout << number * m << unit << " == " << number << "m" << endl;
//                 }
//                 else if (unit == "in") {
//                         cout << number << unit << " == " << number * in << "cm" << endl;
//                 }
//                 else if (unit == "ft") {
//                         cout << number << unit << " == " << number * ft << "in" << endl;
//                 }
//                 else if (unit == "m") {
//                         cout << number << unit << " == " << number * m << "cm" << endl;
//                 }
//         }
//         return 0;
// }