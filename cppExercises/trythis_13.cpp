// #include "../std_lib_facilities.h" // header file with libraries needed
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;


// // finding and fixing errrz
// int area(int length, int width)
// {
//         if (length <= 0 || width <= 0)
//         return -1;
//         return width * length;
// }

// int framed_area(int x, int y)
// {
//         return area(x - 2, y - 2);
// }

// int main()
// {
//         int x = 0;
//         int y = 6;
//         int z = 5;

//         int area1 = area(x,y);
//         if (area1 <= 0)
//                 error("non-positive area");
//         int area2 = framed_area(1,z);
//         int area3 = framed_area(y,z);
//         double ratio = double(area1)/area3;

//         cout << "Check area1 == " << area1 << "\nCheck area2 == " << area2;
//         cout << "\nCheck area == " << area3 << "\nCheck ratio == " << ratio << '\n';
// }

void error(string s)
{
        throw runtime_error(s);
}
int main()
try
{
        vector <int> v;
        
        for (int n; cin >> n;) {
                if (n == 8)
                error("Wrong input");
                v.push_back(n);
        }
        for (int i = 0; i <= v.size(); ++i) {
                if (v[i] == 8)
                error("Error");
                cout << v[i] << endl;
        }

}
catch(runtime_error& e)
{
        cerr << "Runtime error: " << e.what() << '\n';
        // keep_window_open();
        return 1;
}
// catch(...)
// {
//         cerr << "Something went wrong\n";
//         keep_window_open();
//         return 2;
// }
