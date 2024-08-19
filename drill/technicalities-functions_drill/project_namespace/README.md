## Drill 3

Write a program using a single file containing three namespaces X, Y, and
Z so that the following main() works correctly:
```int main()
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
Solution: [xyz.h](./xyz.h) and [use.cpp](use.cpp)