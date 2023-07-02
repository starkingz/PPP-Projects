#include <iostream>
using namespace std;

int main() {

    

    cout << "Hello " << "lets play a simple game\n";

    cout << "\nEnter your first name: " << endl;
    string first_name {""};
    cin >> first_name;

    cout << "Welcome " << first_name << "!" << " (press any number to continue) "<< endl;
    int pnum {};
    cin >> pnum;

    cout << "\nEnter your favorite number between 1 and 100:" << endl;
    int magc_n {};
    cin >> magc_n;

    if (magc_n < 1) {
        cout << "Number is less than 1\n";
    } else if (magc_n > 100) {
        cout << "Number should be less than 100, try again\n";
    } else {
        cout << "Amazing!! " << magc_n << " is my favorite number too.\n";
    }

    return 0;
}