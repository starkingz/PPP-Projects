/*
  Revised by Ohia Goodstar

  calculator08buggy.cpp

  Helpful comments removed.

  We have inserted 3 bugs that the compiler will catch and 3 that it won't.
*/
#include "../../std_lib_facilities.h" // external library

/**
 * Token: Read sequence of character and number
 */
struct Token {
	char kind;
	double value;
	string name;
	Token(char ch)
		:kind(ch), value(0) { }
	Token(char ch, double val)
		:kind(ch), value(val) { }
	Token(char ch, string n)
		:kind(ch), name(n) { }
};

class Token_stream {
	bool full;
	Token buffer;
public:
	Token_stream()
		:full(0), buffer(0) { }

	Token get();
	void unget(Token t) {
		buffer = t;
		full = true;
	}

	void ignore(char);
};

// defined keywords
const char let = 'L';
const char quit = 'Q';
const char print = ';';
const char number = '8';
const char name = 'a';
const char sqr_t = 'S';
const char pow_r = 'P';

/**
 * get: Read input and store its corresponding value in Token
 *
 * Return: Token(ch) or Token(number, val)
 */
Token Token_stream::get()
{
	if (full) {
		full = false;
		return buffer;
	}

	char ch;
	cin >> ch;		// >> skips whitespace or newline
	switch (ch) {
	case print:
	case quit:
	case '(':
	case ')':
	case '+':
	case '-':
	case '*':
	case '/':
	case '%':
	case '=':
	case ',':
		return Token(ch);
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	{
		cin.unget();	// put input back to input stream
		double val;
	       	cin >> val;
       		return Token(number, val);
	}
	default:
		if (isalpha(ch)) {
			string s;
			s += ch;
			while (cin.get(ch) && (isalpha(ch) || isdigit(ch)))
				s += ch;
			cin.unget();
			if (s == "let")
				return Token(let);
			if (s == "sqrt")
				return Token(sqr_t);
			if (s == "pow")
				return Token(pow_r);
			if (s == "quit")
				return Token(name);
			return Token(name, s);
		}
		error("Bad token");
		return 0;
	}
}

void Token_stream::ignore(char c)
{
	if (full && c == buffer.kind) {
		full = false;
		return;
	}
	full = false;

	char ch;
	while (cin >> ch)
	{
		if (ch == c)
			return;
	}
}

struct Variable {
	string name;
	double value;
	Variable(string n, double v)
		:name(n), value(v) { }
};

vector<Variable> names;

double get_value(string s)
{
	int len = names.size();
	for (int i = 0; i < len; ++i) {
		if (names[i].name == s)
			return names[i].value;
	}
	error("get: undefined name ", s);
	return 0;
}

void set_value(string s, double d)
{
	int len = names.size();
	for (int i = 0; i <= len; ++i)
		if (names[i].name == s) {
			names[i].value = d;
			return;
		}
	error("set: undefined name ", s);
}

/**
 * is_declared - search vector<Variable>names if Variable has been declered
 * @s: name to search
 *
 * Return: true if dclared already or false
 */
bool is_declared(string s)
{
	int len = names.size();
	for (int i = 0; i < len; ++i)
	{
		if (names[i].name == s)
			return true;
	}
	return false;
}

/**
 * define_name - add {var, val} to names
 * @var: name to be added
 * @val: value to be added
 *
 * Return: void
 */
void define_name(string var, double val)
{
	if (is_declared(var))
		error("decleared twice, ", var);
	names.push_back(Variable{var, val});
}

Token_stream ts;

double expression();

double primary();

/**
 * get_function - handle functions for sqrt(x)
 *
 * Return: left
 */
double get_function()
{
	Token t = ts.get();

	switch(t.kind) {
	case sqr_t:
	{
       		t = ts.get();

		if (t.kind != '(')
			error("sqrt(x) '(' missing");
		ts.unget(t);
		double d = primary();

		if (d < 0)
			error("cannot find sqrt(-x)", d);
		return sqrt(d);	// call sqrt() from external library
	}
	case pow_r:
	{
		t = ts.get();

		if (t.kind != '(')
			error("pow(x) '(' missing");
		double d = expression();

		t = ts.get();
		if (t.kind != ',')
			error("pow(x, i) ',' missing");
		int i = narrow_cast <int> (expression()); // number should be an integer

		t = ts.get();
		if (t.kind != ')')
			error("pow(x, i) ')' missing");
		return pow(d, i); // get pow(x, i) from external library
	}
	default:
		return 0;
	}
}


/**
 * primary - deal with parenthesis, numbers, sqrt(x), +/-(n) and names
 *
 * Return: Token(val) or d
 */
double primary()
{
	Token t = ts.get();	// read Token from stdin stream
	switch (t.kind) {
	case '(':
	{
		double d = expression();
	       	t = ts.get();
       		if (t.kind != ')')
			error("')' expected");
		return d;
	}
	case sqr_t:	// deal with sqrt(x) function
	case pow_r:
		ts.unget(t);
		return get_function();
	case '-':
		return -primary();
	case '+':
		return +primary();
	case number:
		return t.value;
	case name:
		return get_value(t.name);
	default:
		error("primary expected");
		return 0;
	}
}

/**
 * term - deal with '*', '/' and '%'
 *
 * Return result
 */
double term()
{
	double left = primary();
	while (true) {
		Token t = ts.get(); // read next Token from Token stream
		switch (t.kind) {
		case '*':
			left *= primary();
			break;
		case '/':
		{
			double d = primary();
		       	if (d == 0)
				error("divide by zero");
	       		left /= d;
       			break;
		}
		default:
			ts.unget(t); // put back t into Token
			return left;
		}
	}
}

/**
 * expression - handle '+' and '-' expressions
 *
 * Return: result
 */
double expression()
{
	double left = term();
	while (true) {
		Token t = ts.get(); // read next Token from Token stream
		switch (t.kind) {
		case '+':
			left += term();
			break;
		case '-':
			left -= term();
			break;
		default:
			ts.unget(t); // put back t into Token
			return left;
		}
	}
}

double declaration()
{
	Token t = ts.get();

	if (t.kind != 'a')
		error("name expected in declaration");

	string name = t.name;
	if (is_declared(name))
		error(name, " declared twice");

	Token t2 = ts.get();
	if (t2.kind != '=')
		error("= missing in declaration of ", name);

	double d = expression();
	names.push_back(Variable(name, d));
	return d;
}

double statement()
{
	Token t = ts.get();
	switch (t.kind) {
	case let:
		return declaration();
	default:
		ts.unget(t);	// put back t into Token stream
		return expression();
	}
}

void clean_up_mess()
{
	ts.ignore(print);
}

const string prompt = "> ";
const string result = "= ";

/**
 *  calculate - handle expression evaluation loop
 *
 * Return: void
 */
void calculate()
{
	while (cin)
	try {
       		cout << prompt;

		Token t = ts.get();
	       	while (t.kind == print)
			t = ts.get();
       		if (t.kind == quit)
			return;
       		ts.unget(t);	// put back t into Token stream
		cout << result << statement() << endl;
	}
	catch (runtime_error& e) {
       		cerr << e.what() << endl;
       		clean_up_mess();
       	}
}

/**
 * main - handle fatal errors
 *
 * Return: 0
 */
int main()
try {
	cout << "Available predefined variable names: k"
	     << "\nAvailable functions: sqrt(x), pow(x, i)" << endl;
	// predefine name
	define_name("k", 1000);

	calculate();
	keep_window_open("~");	// cope with window console mode
       	return 0;
}
catch (exception& e) {
       	cerr << "exception: " << e.what() << endl;
       	char c;
       	while (cin >> c && c != ';');
       	return 1;
}
catch (...) {
       	cerr << "exception\n";
       	char c;
       	while (cin >> c && c != ';');
       	return 2;
}
