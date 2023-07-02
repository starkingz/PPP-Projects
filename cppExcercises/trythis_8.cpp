#include <iostream>
using namespace std;

// Function declaration
int square(int n);

// Function definition
int square(int x)
{
        int i;
        int result = 0;

        for (i = 0; i < x; i++)
        result += x;
        return result;
}

int main()
{
        int i;

        for (i = 0; i < 100; i++)
                cout << i << '\t' << square(i) << endl; // function call;
        return 0;
}