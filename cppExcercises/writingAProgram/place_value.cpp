// Chapter 6 - Writing a program
// Exercise 9
// Date: 06.04.2024

/**
 * From the book "principles and practices using c++ by Bjarne Stroustrup"  
 * Write a program that reads digits and composes them into integers. For
 * example, 123 is read as the characters 1, 2, and 3. The program should
 * output 123 is 1 hundred and 2 tens and 3 ones. The number should be
 * output as an int value. Handle numbers with one, two, three, or four
 * digits. Hint: To get the integer value 5 from the character '5' subtract '0',
 * that is, '5'–'0'==5.
*/

#include "../../std_lib_facilities.h" //external header file

class Place_value
{
        public:
                string unit;
                int digit;

                Place_value(string u, int d)
                        :unit(u), digit(d) {}
};

vector <Place_value> pval;

void get_digit(char c)
{
        if ((c < '0' || c > '9'))
                error("Bad digit", c);
}

int ones(int val)
{
        return val;
}

int tens(int d, int n)
{
        int val = ones(d);
        val *= 10;

        return (val + n);
}

int place()
{
        int count = 0;
        char c1;
        cin >> c1;

        int n = c1 - '0';
        int val = ones(n);

        pval.clear();
        pval.push_back(Place_value("ones", val));
        get_digit(c1);  // check if digit is 0:9

        char c2;
        while (cin >> c2 && c2 != '|')
        {
                get_digit(c2);  // check if digit is 0:9
                count++;

                n = c2 - '0';
                val = tens(val, n);
                switch(count)
                {
                        case 1:
                        pval.push_back(Place_value("tens", n));
                        break;
                        case 2:
                        pval.push_back(Place_value("hundred", n));
                        break;
                        case 3:
                        pval.push_back(Place_value("thousand", n));
                        break;
                        default:
                        error("Sorry, cannot handle that many digits");
                }
        }

        return val;
}

int main()
try
{
        int d = 0;
        int len = 0;
        cout << "Please enter an integer not more than 9: (end with '|')\n";
        while (cin)
        {
                d = place();
                cout << d << " is ";

                len = pval.size() - 1;
                for (int i = 0; i <= len; i++)
                {
                        cout << pval[i].digit << " " << pval[len - i].unit;
                        if (i != len)
                                cout << " and ";
                        else
                                cout << endl;
                }
        }
        keep_window_open("~");
}
catch (runtime_error& e)
{
        cerr << e.what() << endl;
        keep_window_open("~"); // to read error mess
        return 1;
}
