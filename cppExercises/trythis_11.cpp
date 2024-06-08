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
        int s1 = area(7; // error: ) missing before ;
        int s2 = area(7) // error: ; missing after )
        Int s3 = area(7); // error: Int is not a type
        // error: non-terminating character (' missing)
        int s4 = area('7); 
}