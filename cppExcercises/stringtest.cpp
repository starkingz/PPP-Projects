#include <iostream>
#include <string>
using namespace std;

/**
 * main - Entry point
 * Description: Reads first and second name
 * Return: Always 0 (success)
*/
int main(){
    cout << "Please enter your first and second name: ";

    string first_name {""};
    string second_name {""};
    cin >> first_name >> second_name; //read two strings
    string full_name = first_name + " " + second_name; //concatenate strings
    
    cout << "Hello " << full_name << endl;

    return 0;

}