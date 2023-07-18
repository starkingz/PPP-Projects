// Chapter 4 Computation Drill
// First drill 
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
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
int main()
{
        double a, b;
        const double formula = 1.0 / 100;

        while (cin >> a >> b){
                if (a < b) {
                        cout << "The smaller value is: " << fixed << setprecision(2) << a << endl;
                        cout << "The larger value is: " << fixed << setprecision(2) << b << endl;
                        if (a == b - formula) {
                                cout << "The numbers are almost equal\n";
                        }
                        
                }
                else if (b < a) {
                        cout << "The smaller value is: " << fixed << setprecision(2) << b << endl;
                        cout << "The larger value is: " << fixed << setprecision(2) << a << endl;
                        if (b == a - formula) {
                                cout << "The numbers are almost equal\n";
                        }
                }
                else
                cout << "The numbers are equal" << endl;
        }
        return 0;
}

