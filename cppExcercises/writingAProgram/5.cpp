// Chapter 6 - Writing a program
// Exercise 5
// Date: 15.03.2024

#include "../../std_lib_facilities.h"

int main()
{
        string sen;
        bool ok {false};

        while (cin) {
                if (sen == ".")
                        ok = true;
                if (sen == "|")
                {
                        if (ok == true)
                                cout << "OK\n";
                        else
                                cout << "not OK\n";
                }
        }
        return 0;
}