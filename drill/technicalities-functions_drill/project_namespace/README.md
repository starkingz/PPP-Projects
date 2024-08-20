# Drill 3

## Problem:
Write a program using a single file containing three namespaces X, Y, and
Z so that the following main() works correctly:
```
int main()
{
	X::var = 7;
	X::print(); // print X’s var

	using namespace Y;
	var = 9;
	print(); // print Y’s var

	{
		using Z::var;
		using Z::print;
		var = 11;
		print(); // print Z’s var
	}

	print(); // print Y’s var
	X::print(); // print X’s var
}
```
## Solution:
Single file containing X, Y and Z namespaces (header file): [xyz.h](./xyz.h)

Main file: [use.cpp](use.cpp)
Exe file: [use](./use)

Source codes compiled and ran on a linux operating system.
Exe file seen in this directory works only on a linux ops
Compile flags: g++ -Wextra -Wall -pedantic -std=c++17
