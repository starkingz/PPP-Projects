#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int get_prime(int n)
{
        int val {0};
        int num;
        // int i = 0;

        if (n == 2 || n == 3 || n == 5)
        val = 1;
        
        if ((n % 2 == 1 && n % 3 == 1) || (n % 5 == 1 && n % 2 == 1)) {
                val = 1;
        }
        if (val == 1) {
                num = n;
        }

        return num;


}

int main()
{
        vector <int> primes;
        int i, j, len;
        int prime {0};
        
        for (i = 1; i <= 100; i++) {
                // if (i > 1) {
                        prime = get_prime(i);
                        primes.push_back(prime);
                // }
        }

        len = primes.size();
        for (j = 1; j <= len; ++j) {
                cout << "primes[" << j << "] == " << primes[j] << endl;
        }

        return 0;
}