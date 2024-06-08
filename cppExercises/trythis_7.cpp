//Computation - statements (for loop statements);
#include <iostream>
using namespace std;

/**
 * main - prints a table of characters with their corresponding integer values
 * 
 * Return: 0 always (success)
*/
int main()
{
    int a = 0;
    int b = 0; // variable for uppercase loop below
    int n = 0;
    cout << "Lowercase Alphabets:\n";
    for (char i = 'a'; i <= 'z'; ++i)
    {
        // if (!(i > 'Z' && i < 'a'))
        cout << i << '\t' << 'a' + a++ << endl;
    }
    cout << "Uppercase alphabet:\n";
    for (char j = 'A'; j <= 'Z'; ++j)
    {
        cout << j << '\t' << 'A' + b++ << endl; // uppercase loop
    }
    cout << "Digits:\n";
    for (char digits = '0'; digits <= '9'; digits++)
    {
        cout << digits << '\t' << '0' + n++ << endl;
    }
    return 0;
}