// Chapter 6 - Completing a program
// Exercise 1
// Date: 13.06.2024

/*
 * Simple calculator
 *
 * Revision history:
 *********** Revised by Ohia Goodstar June 2024
 *********** Revised by Ohia Goodstar May 2024
 *********** Revised by Bjarne Stroustrup November 2013
 *********** Revised by Bjarne Stroustrup May 2007
 *********** Revised by Bjarne Stroustrup August 2006
 *********** Revised by Bjarne Stroustrup August 2004
 *********** Originally writtten by Bjarned Stroustrup
 ******************* (bs@cs.tamu.edu) spring 2004)
 *
 * This program implements a basic expression calculator.
 * Input from cin; output to cout.
 * The grammar for input is:
 *
 * Statement:
 ** Expression
 ** Print
 ** Quit
 *
 * Print: =
 * Quit: x
 *
 * Expression:
 *** Term
 *** Expression + Term
 *** Expression - Term
 *
 * Term:
 *** Factorial
 *** Term * Factorial
 *** Term / Factorial
 *** Term % Factorial
 *
 * Factorial:
 *** Primary
 *** Factorial !
 *
 * Primary:
 *** Number
 *** '(' Expression ')'
 *** - Factorial
 *** + Primary
 *
 * Number:
 *** floating-point-literal
 *
 * Input comes from cin through the Token_stream called ts.
 */

#include "../../std_lib_facilities.h"

//------------------------------------------------------------------------------

class Token{
public:
    char kind;        // what kind of token
    double value;     // for numbers: a value
    Token(char ch)    // make a Token from a char
        :kind(ch), value(0) { }
    Token(char ch, double val)     // make a Token from a char and a double
        :kind(ch), value(val) { }
};

//------------------------------------------------------------------------------

class Token_stream {
public:
    // Token_stream();   // make a Token_stream that reads from cin
    Token get();      // get a Token (get() is defined elsewhere)
    void putback(Token t);    // put a Token back
	void ignore(char c);  // discard character up to and including a c

    Token_stream()
        :full(false), buffer(0) {}

private:
    bool full;        // is there a Token in the buffer?
    Token buffer;     // here is where we keep a Token put back using putback()
};

//------------------------------------------------------------------------------

// The constructor just sets full to indicate that the buffer is empty:
// Token_stream::Token_stream()
//     :full(false), buffer(0)    // no Token in buffer
// {
// }

//------------------------------------------------------------------------------

// The putback() member function puts its argument back into the Token_stream's buffer:
void Token_stream::putback(Token t)
{
    if (full) error("putback() into a full buffer");
    buffer = t;       // copy t to buffer
    full = true;      // buffer is now full
}

//------------------------------------------------------------------------------

// keywords
const char number = '8'; // t.kind means it a number Token
const char quit = 'x'; 	// t.kind==quit means that t is a quit Token
const char print = '='; // t.kind==print means that t is a print Token

Token Token_stream::get()
{
    if (full) {       // do we already have a Token ready?
        // remove token from buffer
        full = false;
        return buffer;
    }

    char ch;
    cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

    switch (ch) {
    case print:
    case quit:
    case '(':
    case ')':
    case '+':
    case '-':
    case '*':
    case '/':
    case '{':
    case '}':
    case '!':
    case '%':
        return Token(ch);        // let each character represent itself
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
    {
        cin.putback(ch);         // put digit back into the input stream
        double val;
        cin >> val;              // read a floating-point number
        return Token(number, val);
    }
    default:
        error("Bad token");
        return 0;
    }
}
// -----------------------------------------------------------------------------

void Token_stream::ignore(char c) // c represents the kind of Token
{
	// first look in the buffer
	if (full && c == buffer.kind) {
		full = false;
		return;
	}

	full = false;

	// now search input:
	char ch = 0;

	while (cin >> ch) {
		if (ch == c)
			return;
	}
}

//------------------------------------------------------------------------------

Token_stream ts;        // provides get() and putback()

//------------------------------------------------------------------------------

double expression();    // declaration so that primary() can call expression()

//------------------------------------------------------------------------------

double factorial();		// declaration so that primary() can call factorial()

// -----------------------------------------------------------------------------

// deal with numbers and parentheses
double primary()
{
    double d = 0;

    Token t = ts.get();
    switch (t.kind) {
    case '{':     // handle '{' expression '}'
    {
        d = expression();
        t = ts.get();
        if (t.kind != '}')
                error("'}' expected");
        return d;
    }
    case '(':    // handle '(' expression ')'
    {
        d = expression();
        t = ts.get();
        if (t.kind != ')') error("')' expected");
            return d;
    }
    case number:
        return t.value;  // return the number's value
    case '-':
	    return -factorial();	// handle negative number/factorial elegantly
    case '+':
	    return +primary();	// handle positive number elegantly
    default:
        error("primary expected");
    }
    return 0;
}

//------------------------------------------------------------------------------

// deal with '!'
double factorial()
{
	const int is_inf {170}; // factorial(171) and above prints 'inf'
        double left = primary();
        Token t = ts.get();     // get the next token from token stream

	while (true)
        {
                switch (t.kind) {
		case '!':
		{
			left = int(left); // truncate floating point number to int
			for (int i = left - 1; i >= 1; i--)
			{
				if (i == is_inf)
					error("factorial overflow");
				left = left * i;
			}
			if (left == 0)
				left = 1;
			if (left < 0)
				error("Overflow");
			t = ts.get();
			break;
		}
		default:
			ts.putback(t); // put t back into token stream
			return left;
                }
        }
}

//------------------------------------------------------------------------------

// deal with *, /, and %
double term()
{
    double left = factorial();
    Token t = ts.get();        // get the next token from token stream

    while (true) {
        switch (t.kind) {
        case '*':
            left *= factorial();
            t = ts.get();
            break;
        case '/':
        {
            double d = factorial();
            if (d == 0) error("divide by zero");
            left /= d;
            t = ts.get();
            break;
        }
	case '%':
	{
		double d = factorial();
		if (d == 0)
			error("%: divide by zero");
		left = fmod(left, d);
		t = ts.get();
		break;
	}
        default:
            ts.putback(t);     // put t back into the token stream
            return left;
        }
    }
}

//------------------------------------------------------------------------------

// deal with + and -
double expression()
{
    double left = term();      // read and evaluate a Term
    Token t = ts.get();        // get the next token from token stream

    while (true) {
        switch (t.kind) {
        case '+':
            left += term();    // evaluate Term and add
            t = ts.get();
            break;
        case '-':
            left -= term();    // evaluate Term and subtract
            t = ts.get();
            break;
        default:
            ts.putback(t);     // put t back into the token stream
            return left;       // finally: no more + or -: return the answer
        }
    }
}

// -----------------------------------------------------------------------------
void clean_up_mess()
{
	ts.ignore(print);
}
// -----------------------------------------------------------------------------

const string prompt = "> "; // indicate the program is asking for an input
const string result = "= "; // used to indicate that what follows is result
// -----------------------------------------------------------------------------
void calculate()		// expression evaluation loop
{
        while (cin)
	try {
		cout << prompt;
                Token t = ts.get();

		while (t.kind == print)
			t = ts.get(); // first discard all "prints"
                if (t.kind == quit)        // 'x' to "exit"
			return;
                ts.putback(t);
                cout << result << expression() << endl;
        }
	catch(exception& e) {
		cerr << e.what() << '\n';
		clean_up_mess();
	}
}

//------------------------------------------------------------------------------

int main()
try
{
	cout << "Welcome to our simple calculator.\n"
             << "Please enter expressions using floating-point numbers.\n"
             << "Available operators: '*', '/', '+', '-', '!'\n"
             << "Enter '=' to print now or 'x' to quite program\n";

	calculate();		// cope with windows console mode
        keep_window_open("~");
	return 0;
}
catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open("~~");
    return 1;
}
catch (...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open("~~");
    return 2;
}

//------------------------------------------------------------------------------
