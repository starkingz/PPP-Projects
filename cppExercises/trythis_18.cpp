#include "../std_lib_facilities.h"

int area(int length, int width)
{
        if (length <= 0 || width <= 0)
                return -1;
        return length * width;
}

int framed_area(int x, int y)
{
        return area(x - 2, y - 2);
}

int main()
{
        int x, y, z;

        cout << "Enter value x: ";
        cin >> x;
        cout << "Enter value y: ";
        cin >> y;
        cout << "Enter value z: ";
        cin >> z;

        int area1 = area(x, y);
        if (area1 <= 0)
                error("Must be a positive result\n ");
        int area2 = framed_area(1,z);
        int area3 = framed_area(y,z);
        double ratio = double(area1)/area3;

        cout << "area1: " << area1 << endl;
        cout << "area2: " << area2 << endl;
        cout << "ratio: " << ratio << endl;
}