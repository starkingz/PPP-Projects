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
        int i, j;

        comg.push_back(1);
        comg.push_back(2);
        comg.push_back(3);
        comg.push_back(4);

        cout << "Cows and BUlls guessing game: guess four integers: ";
        for (int val; cin >> val;)
        {
                if (count == 4)
                        break;
                
                for (int x : comg)
                {
                        if (val == x)
                                error("Digits can't be the same");
                }
                userg.push_back(val);
                ++count;
        }

        int len = comg.size();
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
}