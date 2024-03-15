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
        int len;
        char n;
        cin >> n;
        string name;
        
        switch (n)
        {
                case '.': 
                case '1': 
                case '2': 
                case '3': 
                case '4': case '5': case '6': case '7': case '8': case '9':
                error("Name can't start with a value");
                break;

                default:
                {
                        cin.putback(n);
                        cin >> name;
                }
        }
        int val;
        cin >> val;
        if (!cin)
                error("couldn't read the input");

        len = ns.size();
        for (int i = 0; i < len; i++)
        {
                if (name == ns[i].name)
                        error("Name already exists");
        }
        return Name_value(name, val);
}

int main()
try {
        int len;

        while (cin)
        {
                Name_value v = get();
                len = ns.size();
                if (v.name == "quit" || v.name == "q")
                        break;
                if (v.name == "NoName" && v.value == 0)
                {
                        for (int i = 0; i < len; i++)
                        {
                                cout << ns[i].name << endl
                                     << ns[i].value << endl;
                        }
                }
                else
                        ns.push_back(v);       // put cin into vector
        }
        keep_window_open();       
        return 0;
}
catch (exception& e) {
        cerr << "error: " << e.what() << endl;
        keep_window_open();
        return 2;
}
catch (...) {
        cerr << "Something went wrong\n";
        keep_window_open();
        return 3;
}