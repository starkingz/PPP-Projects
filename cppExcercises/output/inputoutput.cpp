#include <iostream> // Header directive
using namespace std; //standard namespace

int main() // Function definition
{
    cout << "Enter your favorite number between 1 and 100: (Then hit 'Enter' ) "; // Prompts the user
    int favorite_number = 0; // Stores the value to memory
    cin >> favorite_number; // Gets stored value / Reads value saved in the variable
    cout << favorite_number // Displays value to the screen/console
         << endl; // end of line

    return 0; // Always return 0

}