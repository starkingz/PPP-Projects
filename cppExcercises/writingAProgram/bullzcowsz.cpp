// Chapter 6 - Writing a program
// Exercise 8
// Date: 26.03.2024

/**
 * From the book "principles and practices using c++ by Bjarne Stroustrup"     
 * Redo the “Bulls and Cows” game from exercise 12 in Chapter 5 to usen
 * four letters rather than four digits.
*/

//Making a prototype of the program
#include "../../std_lib_facilities.h" //external header file

// read and store two sequence of ints 
class Game_counts
{
        public:
                int bullz;
                int cowz;

        Game_counts (int bc, int cc)    // constructor::
                :bullz(bc), cowz(cc)
                {
                }
};

vector <char> comg;     // store computer guesses

/**
 * init - put computer guesses into comg vector
 * 
 * Return: void
*/
void init()
{
        comg.push_back('a');
        comg.push_back('b');
        comg.push_back('c');
        comg.push_back('d');
}

/**
 * first - read first char input by user
 * 
 * Return: void
*/
Game_counts first()
{
        char usg;
        cin >> usg;
        int bc = 0;
        int cc = 0;

        int len = comg.size();
        for (int i = 0; i < len; i++)
        {
                if (usg == comg[i])
                {
                        if (i == 0)
                                ++bc;
                        else
                                ++cc;
                }
        }
        return Game_counts(bc, cc);
}

/**
 * second - read second char input from the user/console
 * 
 * Return: void
*/
Game_counts second()
{
        Game_counts count = first();
        char usg;
        cin >> usg;     // get the next input from istream

        int len = comg.size();
        for (int i = 0; i < len; i++)
        {
                if (usg == comg[i])
                {
                        if (i == 1)
                                ++count.bullz;
                        else
                                ++count.cowz;
                }
        }
        return Game_counts(count.bullz, count.cowz);
}

/**
 * third - read third char input from the user/console
 * 
 * Return: void
*/
Game_counts third()
{
        Game_counts count = second();
        char usg;
        cin >> usg;     // get the next char from istream

        int len = comg.size();
        for (int i = 0; i < len; i++)
        {
                if (usg == comg[i]);
                {
                        if (i == 3)
                                ++count.bullz;
                        else
                                ++count.cowz;
                }
        }
        return Game_counts(count.bullz, count.cowz);
}

/**
 * fourth - read fourth char input from user / console
 * 
 * Return: void
*/
Game_counts fourth()
{
        Game_counts count = third();
        char usg;
        cin >> usg;

        int len = comg.size();
        for (int i = 0; i < len; i++)
        {
                if (usg == comg[i])
                {
                        if (i == 3)
                                ++count.bullz;
                        else
                                ++count.cowz;
                }
        }
        return Game_counts(count.bullz, count.cowz);
}

/**
 * main - read sequence of char from input and send for parsing
 * 
 * Return: Always 0 (success)
*/
int main()
{
        init();

        while (cin)
        {
                Game_counts count = fourth();
                cout << count.bullz << " bulls and " << count.cowz << " cows\n";
        }
        
        return 0;
}