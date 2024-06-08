//Chapter 5 trythis session
// Date: 13/10/2023 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Calculate area of a rectangle
int area(int length, int width)
{
        return length * width;
}

// Compile to check for errors 
int main()
{
        int x0 = area(1, -7);// error: undeclared function ;
        int x1 = area(7, 6); // error: wrong number of arguments
        int x2 = area(9999, 100); // error: 1st argument has a wrong type 
}