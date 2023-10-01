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
        int i;

        // not greater 1
        if (n <= 1)
        return false;

        // start from 2
        for (i = 2; i <= n / 2; ++i) {
                if (n % i == 0) // check if n is divisible
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
        
        primes.push_back(2); // Put the smallest prime into vector

        for (i = 3; i <= 100; i++) {
                        if (get_prime(i))
                        primes.push_back(i); // put i into vector
        }

        len = primes.size(); // size of vector
        cout << "Primes between 1 and 100: \n";
        for (j = 0; j < len; ++j) {
                cout << primes[j] << endl;
        }

        return 0;
}