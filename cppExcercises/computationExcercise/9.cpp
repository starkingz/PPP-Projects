// Chapter 4 - Computation
// Excercise 11
// Date: 01/10/2023
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

/**
 * main - compute prime numbers
 * 
 * Return: either true or false
*/
bool get_prime(int n)
{
        // int num {0};
        // int val {0};
        
        if (n <= 1)
        return false;
        for (int i = 2; i <= n / 2; ++i) {
                if (n % i == 0)
                return false;
        }
        return true;

}

/**
 * main - read a positive number and print the primes
*/
int main()
{
        vector <int> primes;
        int i, j, len;
        // int prime {0};
        
        primes.push_back(2);
        for (i = 3; i <= 100; i++) {
                // if (i > 1) {
                        if (get_prime(i))
                        primes.push_back(i);
                // }
        }

        len = primes.size();
        cout << "Primes between 1 and 100: \n";
        for (j = 0; j < len; ++j) {
                // if (primes[j] != 0)
                cout << primes[j] << endl;
        }

        return 0;
}