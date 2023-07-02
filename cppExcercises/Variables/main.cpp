#include <iostream>
using namespace std;

int main() {

    cout << "Enter your first name and age:\n";
    string f_name {""};
    cin >> f_name;
    int age {};
    cin >> age;

    cout << "Hello " << f_name << "(age: " << age << " )\n";

    return 0;
}