#include "../std_lib_facilities.h"

/**
 * main - find the highest, lowest and average of given temperatures
*/
int main()
try {
        vector <double> temps;

        
        for (double temp; cin >> temp;) {
                temps.push_back(temp);
        }
        if(!cin)
                error("Could'nt read a double from 'main()'");

        double sum {0};
        double high_temp {0};
        double low_temp {0};
        bool first {true};

        for (double x : temps) {
                if (first == true) {
                        first = false;
                        high_temp = x;
                        low_temp = x;
                }
                if (x > high_temp) // check for highest temp
                        high_temp = x;
                if (x < low_temp) // check for lowest temp
                        low_temp = x;
                sum += x; // compute sum
        }

        int len {0};
        len = temps.size();
        cout << "High temperature: " << high_temp << '\n';
        cout << "Low temperature: " << low_temp << '\n';
        cout << "Average temperature: " << sum / len << '\n';

        return 0;
}
catch (runtime_error& e) {
        cerr << e.what() << endl;
        
        cout << "Enter '~' to terminate program\n";
        for (char ch; cin >> ch;) {
                if(ch == '~')
                return 1;
        }
        return 1;
}
catch (...) {
        cerr << "Something went wrong\n";
        return 1;
}