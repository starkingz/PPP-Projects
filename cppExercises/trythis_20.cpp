#include "../std_lib_facilities.h"

// compute area of rectangle
// pre-condition - argument must be positive
// post-codndition - returns positive value

int area(int length, int width)
{
        if (length <= 0 || width <= 0)
                error("area() pre-condition error");
        int a = length * width;
        if (a <= 0)
                error("area() post-condtion error");
        return a;
}

// entry point
int main()
try
{
        int a, b;

        cout << "Enter pair of values (to calculate area): ";
        cin >> a >> b;
        int res = area(a, b);

        cout << "The area of the rectangle is " << res << endl;

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