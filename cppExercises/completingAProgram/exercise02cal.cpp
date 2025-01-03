// Chapter 6 - Completing a program
// Exercise 2
// Date: 15.06.2024

/*
 * Simple calculator
 *
 * Revision history:
 *********** Facilities added by Ohia Goodstar 15 June 2024 (assignment operator)
 *********** Facilities added by Ohia Goodstar 13 June 2024 (underscore)
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
 * Print: ;
 * Quit: Q
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
	string name;	  // for word
	Token(char ch)    // make a Token from a char
		:kind(ch), value(0) { }
	Token(char ch, double val)     // make a Token from a char and a double
		:kind(ch), value(val) { }
	Token(char ch, string n) // make a Token from char and string
		:kind(ch), name(n) { }
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
const char quit = 'Q'; 	// t.kind==quit means that t is a quit Token
const char print = ';'; // t.kind==print means that t is a print Token
const char let = 'L';	// let represents declaration Token
const char name = 'a';	// name Token
const string declkey = "let";	// declaration keyword

/**
 * isname - check ch for the specified name
 * @ch: character to check
 *
 * Return: true or false
 */
bool isname(char ch)
{
	if (isalpha(ch))
		return true;
	if (isdigit(ch))
		return true;
	if (ch == '_')
		return true;
	return false;
}

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
    case '=':
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
	    if (isalpha(ch)) {
		    string s;
		    s += ch;

		    while (cin.get(ch) && isname(ch))
			    s += ch;
		    cin.putback(ch);
		    if (s == declkey)
			    return Token{let};
		    return Token{name, s};
	    }
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

/**
 * Variable - store sequence of name and value
 *
 */
class Variable {
public:
	string name;
	double value;

	Variable (string n, double v)
		:name(n), value(v) { }
};

vector <Variable> var_table;

//------------------------------------------------------------------------------

Token_stream ts;        // provides get() and putback()

//------------------------------------------------------------------------------

double expression();    // declaration so that primary() can call expression()

//------------------------------------------------------------------------------

double factorial();		// declaration so that primary() can call factorial()

// -----------------------------------------------------------------------------

/**
 * is_declared - check var_table if name has been declared already
 * @name: name to check
 *
 * Return: true or false
 */
bool is_declared(string name)
{
	for (Variable& v : var_table)
	{
		if (name == v.name)
			return true;
	}
	return false;
}

/**
 * define_name - add {var, val} to var_table
 * @var: Variable name to add
 * @val: value to add
 *
 */
void define_name(string var, double val)
{
	if (is_declared(var))
		error(var, " declared twice");
	var_table.push_back(Variable{var, val});
}

/**
 * set_value - assign new value / expression to Variable
 * @s: name to assign value to
 * @d: value to assign to name
 */
void set_value(string s, double d)
{
	for (Variable& v : var_table)
	{
		if (v.name == s)
		{
			v.value = d;
			return;
		}
	}
	error ("set: undefined variable ", s);
}

/**
 * get_value - search var_table and fetch declared Variable value
 * @s: name to search
 *
 * Return: v.value
 */
double get_value(string s)
{
	if (is_declared(s)) {
		Token t = ts.get();

		switch (t.kind) {
		case '=':
		{
			double d = expression();
			set_value(s, d);
		}
		break;
		default:
			ts.putback(t);
		}
	}
	for (Variable& v : var_table) {
		if (v.name == s)
			return v.value;
	}
	error ("get: undefined variable ", s);
}

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
    case name:
	    return get_value(t.name); // return stored variable value
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

/**
 * declaration - declare a variable called "name" with the initial value "expression"
 *
 * return: d
 */
double declaration()
{
	Token t = ts.get();

	if (t.kind != name)
		error("name expected in declaration");
	string var_name = t.name;

	Token t2 = ts.get();

	if (t2.kind != '=')
		error ("= expected in declaration of ", var_name);

	double d = expression();

	define_name(var_name, d);
	return d;
}

/**
 * statement - check if user is declaring a Variable
 *
 * return: declaration() or expression()
 */
double statement()
{
	Token t = ts.get();

	switch(t.kind) {
	case let:
		return declaration();
	default:
		ts.putback(t);
		return expression();
	}
}

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
                cout << result << statement() << endl;
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
             << "Enter " << print << " to print now or " << quit
	     << " to quit program\n";

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
