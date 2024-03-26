// Chapter 6 - Writing a program
// Exercise 8
// Date: 26.03.2024

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