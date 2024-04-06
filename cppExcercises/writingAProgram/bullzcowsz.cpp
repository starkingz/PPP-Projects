// Chapter 6 - Writing a program
// Exercise 8
// Date: 26.03.2024

/**
 * From the book "principles and practices using c++ by Bjarne Stroustrup"     
 * Redo the “Bulls and Cows” game from exercise 12 in Chapter 5 to use
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
vector <char> userg;   // store user guesses

void not_repeat();   // Make sure computer gueses do not repeat

/**
 * init - put computer guesses into comg vector
 * 
 * Return: void
*/
void init()
{
        // comg.push_back('a');
        // comg.push_back('b');
        // comg.push_back('c');
        // comg.push_back('d');
        int i = 0;
        // clear values in vectors when init() is called
        comg.clear();
        userg.clear();
        srand(time(NULL));
        for (i = 0; i < 4; i++)
        {
                // int cr = rand();
                char cc = 'a' + rand() % 25;
                // cout << "Rand(): " << cr << ", ";
                // cout << "\nRand()Alph: " << cc << endl;
                comg.push_back(cc);
        }

        not_repeat();
}

/**
 * do_not_repeat - Do not repeat computer guesses
 * Return: void
*/
void not_repeat()
{
        int j = 0;
        int k = 0;
        while (k != 3)
        {
                if (j == k)
                        j++;
                if (comg[k] == comg[j])
                        init();
                j++;
                if (j == 4)
                {
                        j = 0;
                        k++;
                }
        }
}

/**
 * is_duplicate - print error to the screen if user inputs same letter twice
*/
void is_duplicate(char c)
{
        int len = userg.size();

        for (int i = 0; i < len; i++)
        {
                if (c == userg[i])
                        error("Duplicate, ", c);
        }
        userg.push_back(c);
}

/**
 * is_letter - check if input is a letter or not
 * 
 * Return: 1 or 0
*/
bool is_letter(char u)
{
        for (int i = 'A'; i <= 'z'; i++)
        {
                if (u == i && !(u > 'Z' && u < 'a'))    // check that input is between a-z & A-Z only
                        return 1;
        }
        return 0;
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
        userg.push_back(usg);
        
        if (!is_letter(usg))
                error("Input not a letter");

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

        is_duplicate(usg);  // check if usg is a duplicate
        if (!is_letter(usg))
                error("Input not a letter");

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

        is_duplicate(usg);  // check if usg is a duplicate
        if (!is_letter(usg))
                error("Input not a letter");

        int len = comg.size();
        for (int i = 0; i < len; i++)
        {
                if (usg == comg[i])
                {
                        if (i == 2)
                                ++count.bullz;
                        else
                                ++count.cowz;
                }
        }
        return Game_counts(count.bullz, count.cowz);
}
bool is_letter(char u);
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

        is_duplicate(usg);  // check if usg is a duplicate
        if (!is_letter(usg))
                error("Input not a letter");
                
        char uu;
        if (cin >> uu && uu != '|')     // check if length of input is greater than 4
                error("Length of input is more than 4");
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
        cout << "=========== Bulls and Cows guessing game ==========\n";
                cout << "============= Discover the hidden letters ============\n";
                cout << "       Bulls == right guess, right position.\n";
                cout << "       Cows == right guess, wrong position.\n\n";
        while (cin)
        {
                cout <<  "Guess only four lowercase letters (from a-z): ";
                Game_counts count = fourth();
                cout << count.bullz << " bulls and " << count.cowz << " cows\n";
                if (count.bullz == 4)
                        init();
        }
        
        return 0;
}