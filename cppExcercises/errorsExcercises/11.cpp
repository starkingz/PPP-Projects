// Chapter 5 - Errors
// Excercise 11
// Date: 4/1/2023
#include "../../std_lib_facilities.h" // external library

/**
 * main - play bulls and cows guessing game
*/
int main()
{
        vector <int> comg;
        vector <int> userg;
        int count = 0;
        int bullz = 0;
        int cowz = 0;
        int knownval = 0;
        bool restart = true;
        int i, j, len;

        comg.push_back(1);
        comg.push_back(2);
        comg.push_back(3);
        comg.push_back(4);

        cout << "=========== Cows and Bulls guessing game ==========\n";
        
        while (restart == true)
        {
                cout <<  "Guess only four integers (from 0 to 9): ";
                for (int val; cin >> val;)
                {
                        if (val > 9 || val < 0)
                                error("Input range is greater than 9 or lesser than 0");
                        userg.push_back(val); // put val into vector
                        if (count == 3)
                                break;
                        ++count;
                }
                if (!cin)
                        error("Could'nt read an int");

                len = comg.size();
                // int len2 = userg.size();
                for (i = 0; i < len; ++i)
                {
                        for (j = 0; j < len; ++j)
                        {
                                if (userg[i] == comg[j])
                                {
                                        ++knownval;
                                        if (userg[i] == comg[i])
                                                ++bullz;
                                        else
                                                ++cowz;
                                }
                        }
                }
                cout << bullz << " bulls and " << cowz << " cows\n";
                if (bullz == 4)
                        restart = false;
                else
                        cout << "Play again!!!\n";
                bullz = 0;
                cowz = 0;
        }
}