#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//simple program to excercise operators
int main(){

    cout << "Please enter an integer: ";
    int n;
    cin >> n;
    double n2 {0};
    n2 = n;
    cout << "n == " << n
            << "\nn+1 == " << n+1
            << "\nthree times n == " << 3*n
            << "\ntwice n == " << n+n
            << "\nn squared == " << n*n
            << "\nhalf of n == " << n/2
            << "\nsquare root of n == " << sqrt(n2)
            << endl;

            return 0;
}