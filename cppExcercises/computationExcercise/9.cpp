#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int get_prime(int n)
{
        if ((n % 2 == 1 && n % 3 == 1) || n == 2 || n == 3)
        return n;
}

int main()
{
        vector <int> primes;
        int i, j, len;
        int prime {0};
        
        for (i = 1; i <= 100; i++) {
                prime = get_prime(i);
                primes.push_back(prime);
        }

        len = primes.size()
        for (j = 0; j < len; ++j) {
                cout << "primes[" << i << "] == " << primes[i] << endl;
        }

        return 0;
}