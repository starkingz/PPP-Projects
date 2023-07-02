#include <iostream>
using namespace std;

int main() {

    cout << "Enter two names: ";

    string first;
    string second;
    cin >> first;
    cin >> second;

    if (first == second) {
        cout << "Thats the same name twice\n";
    }
    else if (first < second) {
        cout << first << " is alphabetically before " << second << "\n";
    }
    else if (first > second) {
        cout << first << " is alphabetically after " << second << endl;
    }
    return 0;
}