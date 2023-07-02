#include <iostream>
#include <string>
using namespace std;

/**
 * main - convert double to int && int to char && char to int
 * 
 * Return: 0 always (success)
*/
int main(){
    double d{0};

    while(cin >> d){
        int i = d; //d is assigned to i
        char c = i; //i is assigned to c
        int i2 = c; //c is assigned to i2
        cout << "d == " << d
             << " i == " << i
             << " i2 == " << i2
             << " char (" << c <<")\n";
    }
    return 0;
}