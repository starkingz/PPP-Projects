// Chapter 4 Computation Drill
// First drill 
#include <iostream>
#include <vector>
#include <string>
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
//                 if (a < b)
//                 cout << "the smaller value is: " << a << endl;
//                 else
//                 cout << "The larger value is: " << b << endl;
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
int main()
{
        int a, b;

        while (cin >> a >> b){
                if (a < b)
                cout << "The smaller value is: " << a << endl;
                else if (a == b)
                cout << "The numbers are equal" << endl;
                else
                cout << "The larger value is: " << b << endl;
        }
        return 0;
}

