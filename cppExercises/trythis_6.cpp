//computation - statements(while statement);
// Calculate and print a table of squares 0-99
#include <iostream>
using namespace std;

/**
 * Question: The character 'b' is char('a'+1 ), 'c' is char('a'+2), etc. Use a loop to write out
 * a table of characters with their corresponding integer values
*/
// int main()
// {
//     char alpha = 'a';
//     int n = 0;

//     while (alpha <= 'z')
//     {
//         cout << alpha << '\t' << 'a' + n++ << endl;
//         ++alpha; 
//     }
// }
int square(int);
int square(int a)
{
    return a * a;
}
int main(){
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0) // even
        cout << i << '\t' << square(i) << endl;
    }
}