// Chapter 4 - Computation
// Excercise 6
// Date: 25/09/2023
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/**
 * main - Turn digit to spelled out values and spelled out values to digits
 * 
 * Return: 0 always success
*/
int main()
{
        vector <string> words {"zero", "one", "two", "three", "four", "five", 
                               "six", "seven", "eight", "nine"};
        // vector <int> digits {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        int num {0};

        cout << "Exit with '|'\n\n";
        cout << "Enter digits and spelled out values: (between 0 and 9) \n";
        int digit {0};
        string word {" "};
        
        string spelled_out;
        while (cin >> digit >> word) {
                if (digit <= 9 && digit >= 0) {
                        spelled_out = words[digit];
                        cout << spelled_out << endl;
                }
                else if (digit < 0) {
                        cout << "Less than 0.\n";
                }
                else {
                        cout << "Greater than 9.\n";
                }
                int len = words.size() - 1;
                for (int i = len; i >= 0; i--) {
                                if (word == words[i])
                                num = i;
                }
                cout << num << endl;
        }

        return 0;
}
