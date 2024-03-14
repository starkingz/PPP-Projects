// Chapter 6 - Writing a program
// Exercise 4
// Date: 14.03.2024

#include "../../std_lib_facilities.h"

class Name_value {       
        public:
                string name;
                int value;

        Name_value(string n, int v)
                : name(n), value(v) {}
};

vector <Name_value> ns;

Name_value get()
{
        string n;
        cin >> n;
        int v;
        cin >> v;

        return Name_value(n, v);
}

int main()
{
        int len;

        while (cin)
        {
                Name_value v = get();
                len = ns.size();
                if (v.name == "NoName" && v.value == 0)
                {
                        for (int i = 0; i < len; i++)
                        {
                                cout << ns[i].name << endl
                                     << ns[i].value << endl;
                        }
                        break;
                }
                ns.push_back(v);       // put cin into vector
        }
        return 0;
}