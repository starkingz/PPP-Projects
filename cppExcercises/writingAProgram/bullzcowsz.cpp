// Chapter 6 - Writing a program
// Exercise 8
// Date: 26.03.2024


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