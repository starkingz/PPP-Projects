#include <iostream>
#include <cstdlib>

struct numbers {
	std::string prop[7];
	numbers( std::string a, std::string b, std::string c, std::string d,
		 std::string e, std::string f, std::string g) {
		prop[0] = a;
		prop[1] = b;
		prop[2] = c;
		prop[3] = d;
		prop[4] = e;
		prop[5] = f;
		prop[6] = g;
	}
};

void Print( numbers * Array, std::string num ) {
	unsigned T = num.length();
	for ( int s = 0; s < 7; ++s ) {
		for ( unsigned r = 0; r < T; ++r ) {
			int W = num[r] - 'a';
			std::cout << Array[W].prop[s];
		}
		std::cout << std::endl;
	}
}


int main()
{

	numbers myArray[] = {
	// 	numbers ("|¯¯¯ ", "|    ", "|    ", "|    ", "|    ", "|    ",
	// 		 "|___ "),
	// 	numbers ( "|¯¯¯ ", "|    ", "|    ", "|--- ", "|    ", "|    ",
	// 		  "|___ "),

	// 	numbers ("|  |", "|  |", "|  |", "|--|", "|  |", "|  |",
	// 		 "|  |")
		numbers ( "/| ", " | ", " | ", " | " ),
		numbers ( "/¯¯¯\\", " ___/", "/    ", "\\____" ),
		numbers ( "/¯¯¯\\", "    /", "    \\", "\\___/" ),
		numbers ( "  /  ", " / | ", "/  | ", "¯¯¯÷¯" ),
		numbers ( "|¯¯¯|", "|___ ", "    |", "|___|" ),
		numbers ( "|    ", "|___ ", "|   |", "|___|" ),
		numbers ( "¯¯¯¯| ", "    | ", " ¯¯¯|¯", "    | " ),
		numbers ( "/¯¯¯\\", "\\___/", "/   \\", "\\___/" ),
		numbers ( "|¯¯¯|", "|___|", "    |", "    |" )
	};
	std::cout << "Enter any digits ";
	std::string num;
	std::getline( std::cin, num);
	Print ( myArray, num );

	return 0;
}
