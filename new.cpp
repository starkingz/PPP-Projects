// #include <iostream>
// using namespace std;

// int main(){
   
//    int numbers;

//    for (numbers = 0; numbers < 10; numbers++)
//    {
//     cout << numbers;
//    }
   
//     return 0;
// }

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
        vector <double> temps; // declare

        for (double temp; cout << "Enter temperature value:" && cin >> temp;) // Read temp
        temps.push_back(temp);          // Put temp into vector(temps)
        
        // Calcualate for mean
        double sum = 0;
        int len = temps.size(); // Size of vector
        for (int i = 0; i < len; i++)
        sum += temps[i];
        cout << "Temperature Average: " << sum / temps.size() << endl;

        // Calculate for median
        sort(temps.begin(), temps.end());
        cout << "Temperature median: ";
        if (len % 2 != 0)
        cout << temps[len / 2] << endl; 
        else
        cout << temps[len / 2 - 1] + temps[len / 2] << endl;
        
        return 0;
}