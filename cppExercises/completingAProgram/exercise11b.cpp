// Chapter 7 - completing a program
// Excercise 11b
// Date: 08.07.2024
// clean up code of chapter 5 excercise 11
// 15/01/2024 - Program works but has few glitches and bugs which needs to be fixed
// Working on fixing it....

/**
             Revision history:

	     Revised by Ohia Goodstar 08 july 2024
	     Originally written by Ohia Goodstar
	     (goodstarohia@gmail.com) 15 january 2024

	     This program implements a basic bulls and cows guessing game
	     input from cin; output to cout;
	     This program does not accept sequence of statements(input)

	     print: ENTER key
	     quit: Q

   12.07.2024. Found quite some bugs here:
   Fixing each bug incrementally.

   Bug fixes:
   user inputting duplicate digits. - fixed
   user inputting more 4 digits at once. - fixed
   computer generating same sequence of random digits and storing duplicate digits - fixed
   program to handle negative digits input elegantly. - fixed
   put codes in seperate functions to perform a single logical action. - fixed
   add new features - make cin read char and store as ints - added
   program to print results with singular and/or plural statements based on count - fixed
   Add a way for user to quit program - fixed
*/
#include "../../std_lib_facilities.h" // external library

vector <int> comg;		// store sequence of computer guesses
vector <int> userg;		// store sequence of user guesses
int bulls_count = 0;		// count for bulls guesses
int cows_count = 0;		// count for cows guesses
char quit = 'Q';		// keyword to quit

/**
 * init - generate computer guesses
 * @n: integer to seed
 *
 * Return: nothing
 */

void init(int n);		// not_repeat() can call init()

/**
 * not_repeat - clear repeated computer guesses
 * @n: seed number
 *
 * Return: nothing
 */
void not_repeat(int n)
{
	int j = 0;
	int k = 0;

	while (k != 3) {
		for (j = 0; j < 4; j++) {
			if (comg[k] == comg[j] && k != j)
				init(++n);
		}
		k++;
	}
}

/**
 * init - generate computer guesses
 * @n: integer to seed
 *
 * Return: nothing
 */
void init(int n)
{
	int i = 0;

	comg.clear();		// clear last computer guesses

	seed_randint(n);

	for (i = 0; i < 4; i++) {
		char comval = randint(9) + '0';

		comg.push_back(comval);
	}

	not_repeat(n);
}

/**
 * put_digit - store user guess in vector and handle duplicates
 * @n: user guess
 *
 * Return: nothing
 */
void put_digit(int n)
{
	int i = 0;
	int len = userg.size();

	for (i = 0; i < len; i++) { // check if n is a duplicate
		if (userg[i] == n)
			error("duplicate, ", n - '0');
	}
	userg.push_back(n);
}

/**
 * get_value - get input from cin
 *
 * Return: true or false
 */
bool get_value()
{
	char usg = 0;
	cin >> usg;

	if (usg >= '0' && usg <= '9') {
		put_digit(usg);	// put input into usg[] vector.
	}
	else{	// handle non-digits
		if (usg == quit)
			return false;
		error("bad input");
	}
	return true;
}

/**
 * set_count - set bulls and cows score
 * @n: score controller
 *
 * Return: true or false
 */
bool set_count(int n)
{
	if (!get_value())
		return false;

	int i = 0;

	int len = comg.size();
	for (i = 0; i < len; i++) {
		if (userg[n] == comg[i]) {
			if (userg[n] == comg[n])
				++bulls_count;
			else
				++cows_count;
		}
	}
	return true;
}

/**
 * place_count - increment count
 *
 * Return: true or false
 */
bool place_count()
{
	int j = 0;

	userg.clear();		// clear user guesses

	bulls_count = 0;
	cows_count = 0;

	while (j <= 3) {
		if (!set_count(j))
			return false;
		j++;
	}

	char cc = 0;

	if (cin.get(cc) && cc != '\n') {
		if (cc == quit)
			return false;
		else
			error("length of digits exceeded");
	}
	return true;
}

/**
 * statement - handle the loop
 *
 * Return: nothing
 */
void statement()
{
	string prompt = "> ";
	string bull = " bull";
	string cow = " cow";

	while (cin) {
		cout << prompt;

		if (!place_count())
			return;

		if (bulls_count < 2)
			cout << bulls_count << bull << " and ";
		else
			cout << bulls_count << bull << "s and ";

		if (cows_count < 2)
			cout << cows_count << cow << "\n";
		else

			cout << cows_count << cow << "s\n";

		if (bulls_count == 4) {
			cout << "Please enter a number to randomize: ";
			int n = 0;
			if (!(cin >> n))
				error ("bad input");

			cout << "Please enter only four random digits (0-9)\n";

			init(n);
		}
	}
}
/**
 * main - play bulls and cows guessing game
 *
 * Return: nothing
*/
int main()
try
{
	cout << "=========== Bulls and Cows guessing game ==========\n";
	cout << "============= Discover the hidden code ============\n";
	cout << "       Bulls == right guess, right position.\n";
	cout << "       Cows == right guess, wrong position.\n";
	cout << "Use ENTER key to print\n";

	cout << "Please enter a number to randomize: ";
	int n = 0;
	if (!(cin >> n))
		error("bad input");

	cout << "Please enter only four random digits (0-9)\n";

	init(n);
	statement();

	keep_window_open("~");
	return 0;
}
catch (runtime_error& e) {
        cerr << e.what() << endl;
        keep_window_open("~");  // for some windows(tm) setup
}
catch (exception& e) {
        cerr << e.what() << endl;
        keep_window_open("~");  // for some windows(tm) setups
}
catch (...) {
        cerr << "Something went wrong\n";
        keep_window_open("~");  // for some windows(tm) setups
}
