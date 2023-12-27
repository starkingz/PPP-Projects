// Chapter 5 - Errors
// Excercise 5
// Date: 27/12/2023
// #include "../std_lib_facilities.h" // external library
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * error: return runtime error
*/
void error(string s);

/**
 * ktoc: convert from kelvin to celcius
 * @k: argument
 * 
 * return: c value
*/
double ktoc(double k);  //ktoc() declaration

int main()
try {
        double kel {0};
        cout << "Enter a temperature value in degree Kelvin: \n";
        cin >> kel;

        double cel = ktoc(kel);
        cout << cel << " degree Celsius.\n";

        return 0;
}
catch(runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
}
catch(...) {
        cerr << "Something went wrong\n";
        return 2;
}

void error(string s)
{
        throw runtime_error(s);
}

double ktoc(double k)
{
        if (k < 0)
                error("ktoc() - Input below absolute zero\n");

        double c = k - 273.15;

        return c;
}