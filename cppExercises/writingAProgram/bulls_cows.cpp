// Chapter 6 - Writing a program
// Exercise 8
// Date: 26.03.2024

/**
   Revised by Ohia Goodstar 08 June 2024
 * From the book "principles and practices using c++ by Bjarne Stroustrup"
 * Redo the “Bulls and Cows” game from exercise 12 in Chapter 5 to use
 * four letters rather than four digits.
*/

//Making a prototype of the program
#include "../../std_lib_facilities.h" //external header file

int bulls_count = 0;
int cows_count = 0;
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
        int i = 0;
        // clear values in vectors when init() is called
        comg.clear();

        for (i = 0; i < 4; i++)
        {
                char cc = 'a' + rand() % 25;
		// cout << cc << endl; // for testing purposes only
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
 * @c: char to check and put into vector
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
 * @u: char to check
 * Return: 1 or 0
 */
bool is_letter(char u)
{
        for (int i = 'A'; i <= 'z'; i++)
        {
                if (u == i && !(u > 'Z' && u < 'a'))    // check that input is between a-z & A-Z only
                        return true;
        }
        return false;
}

/**
 * get_counts - read sequence of chars and return counts for bulls and cows
 * @n: bulls and cows counting sequence
 */
void get_counts(int n)
{
        char usg;
        cin >> usg;

        is_duplicate(usg);  // check if usg is a duplicate

        if (!is_letter(usg))
                error("Input not a letter");

        int len = comg.size();

	for (int i = 0; i < len; i++)
        {
                if (usg == comg[i])
                {
                        if (i == n)
                                ++bulls_count;
                        else
                                ++cows_count;
                }
        }
}

/**
 * set_counts - reset values, reset counts and get counts
 */
void set_counts()
{
	int i = 0;

	userg.clear();		// reset values in userg

	// reset counts
	bulls_count = 0;
	cows_count = 0;

	while (i <= 3) {
		get_counts(i);
		i++;
	}

        char uu;

        if (cin.get(uu) && !isspace(uu))     // check if input length is > 4
                error("length of input is more than 4");
	return;
}

/**
 * statament - handle loop
 *
 * Return: nothing
 */
void statement()
{
	string prompt = "> ";

	while (cin)
        try {
                cout << prompt;

		set_counts();
                cout << bulls_count << " bulls and " << cows_count << " cows\n";

                if (bulls_count == 4)
                {
                        cout << "*************** WELL DONE ***************\n";
                        cout << "NEW GAME ->\n";
                        init();
			cout << "Please enter four random characters (a-z)\n";
                }
        }
	catch (exception& e) {
		cerr << e.what() << endl;
		cin.ignore(120, ' '); // ignore left over character in buffer
	}
}

/**
 * main - read sequence of char from input and send for parsing
 *
 * Return: Always 0 (success)
*/
int main()
try
{
	srand(time(NULL));
	init();

	cout << "=========== Bulls and Cows guessing game ==========\n";
	cout << "============= Discover the hidden letters ============\n";
	cout << "       Bulls == right guess, right position.\n";
	cout << "       Cows == right guess, wrong position.\n\n";
	cout << "Use ENTER key to print\n";
	cout << "Please enter four random characters (a-z)\n";

	statement();

        keep_window_open("~");
        return 0;
}
catch (runtime_error& e)
{
        cerr << e.what() << endl;
        keep_window_open("~");
        return 1;
}
catch (exception& e)
{
        cerr << e.what() << endl;
        keep_window_open("~");
        return 2;
}
catch (...)
{
        cerr << "Oops! Something went wrong!\n";
        keep_window_open("~");
        return 3;
}
