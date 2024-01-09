// Chapter 5 - Errors
// Excercise 13
// Date: 6/1/2023
// Modification of excercise 12
#include "../../std_lib_facilities.h" // external library

/**
 * main - play bulls and cows guessing game
*/
int main()
{
        vector <int> comg(4);
        vector <int> userg(4);
        int count = 0;
        int bullz = 0;
        int cowz = 0;
        string startagain {"yes"};
        // int knownval = 0;
        bool restart = true;
        int i, j, len;

        
        while (startagain == "yes")
        {       
                // cout << "Enter any number: ";
                // int n;
                // cin >> n;
                // seed_randint(n);
                for (int i = 0; i < 4; ++i)
                {
                        int comval = randint(9);
                        if (i == 0 || comval != comg[i - 1])
                        cout << comval << " ";
                        comg[i] = comval;
                }
                cout << "\n=========== Bulls and Cows guessing game ==========\n";
                cout << "============= Discover the hidden code ============\n";
                cout << "       Bulls == right guess, right position.\n";
                cout << "       Cows == right guess, wrong position.\n\n";
                len = userg.size();     // size of userg vector
                restart = true;
                while (restart == true)         //repeat game everytime user doesn't get the game
                {
                        cout <<  "Guess only four integers (from 0 to 9): ";
                        for (int val; cin >> val;)
                        {
                                if (val > 9 || val < 0)
                                {
                                        error("Input range is greater than 9 or lesser than 0");
                                }
                                // int comval = randint(10);
                                for (i = count; i < len; ++i) // initialize by every iteration of count
                                {
                                        userg[i] = val;
                                        break;
                                }
                                if (count == 3)
                                        break;
                                ++count;
                        }
                        if (!cin)
                                error("Could'nt read an int");

                        len = comg.size();      // size of comg vector
                        for (i = 0; i < len; ++i)
                        {
                                for (j = 0; j < len; ++j)
                                {
                                        if (userg[i] == comg[j])
                                        {
                                                // ++knownval;
                                                if (userg[i] == comg[i])
                                                        ++bullz;
                                                else
                                                        ++cowz;
                                        }
                                }
                        }
                        cout << bullz << " bulls and " << cowz << " cows\n";
                        if (bullz > 4)
                        {
                                cout << "========== WELL DONE ==========\n";
                                cout << "Start a new game again? (yes/no): ";
                                cin >> startagain;
                                if (startagain == "yes")
                                        startagain = "yes";
                                else if (startagain == "no")
                                        startagain = "no";
                                else
                                        error("Wrong response\n");
                                restart = false;  
                        }
                        if (bullz != 4)
                        {
                                cout << "========== Continue playing! ==========\n";
                        }
                        else
                        {
                                cout << "========== WELL DONE ==========\n";
                                cout << "Start a new game again? (yes/no): ";
                                cin >> startagain;
                                if (startagain == "yes")
                                        startagain = "yes";
                                else if (startagain == "no")
                                        startagain = "no";
                                else
                                        error("Wrong response\n");
                                restart = false;
                        }
                        bullz = 0;
                        cowz = 0;
                        count = 0;
                }
        }
}