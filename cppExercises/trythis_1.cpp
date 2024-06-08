/**
 * main - Entry point
 * Description: A program that reads the name and age in months.
 * Return: Always 0 (success)
*/

#include <iostream>
using namespace std;

int main(){

    cout << "Enter your first name and age:" << endl;
    string first_name {};
    double age;
    cin >> first_name;
    cin >> age;
    
    cout << "Hello, " << first_name << " (age: " << age*12 << " months old)\n";

    return 0;
}