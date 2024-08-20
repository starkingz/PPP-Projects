// #include <iostream>
// int main() {

//     int age;
//     std::cout << "Enter your real age: ";
//     std::cin >> age;

//     if (age < 100){
//         std::cout << "\nYou are pretty young" << std::endl;
//     }    
//     else if ( age == 100){
//         std::cout << "\nYou are old" << std::endl;
//     }
//     else {
//        std::cout << "You are really old" << std::endl;
//     }

//     std::cout << "\nYour age is : " << age << std::endl;
//     return 0;
// }
// using namespace std;

// #include "std_lib_facilities.h" // external library

// int main()
// {
//         int a = narrow_cast<int> (2.5);

        
// }



// Chapter 5 - Errors
// Excercise 11
// Date: 4/1/2023
#include "std_lib_facilities.h" // external library

/**
 * main - play bulls and cows guessing game
*/
// int main()
// {
//         vector <int> comg;
//         vector <int> userg;
//         int count = 0;
//         int bullz = 0;
//         int cowz = 0;
//         int knownval = 0;
//         bool restart = true;
//         int i, j, len;

//         comg.push_back(1);
//         comg.push_back(2);
//         comg.push_back(3);
//         comg.push_back(4);

//         cout << "=========== Cows and Bulls guessing game ==========\n";
//         len = comg.size();
//         while (restart == true)
//         {
//                 cout <<  "Guess only four integers (from 0 to 9): ";
//                 for (int val; cin >> val;)
//                 {
//                         if (val > 9 || val < 0)
//                                 error("Input range is greater than 9 or lesser than 0");
//                         userg.push_back(val); // put val into vector
//                         if (count == 3)
//                                 break;
//                         ++count;

//                         for (i = 0; i < len; ++i)
//                         {
//                                 for (j = 0; j < len; ++j)
//                                 {
//                                         if (val == comg[j])
//                                         {
//                                                 ++knownval;
//                                                 if (val == comg[i])
//                                                         ++bullz;
//                                                 else
//                                                         ++cowz;
//                                         }
//                                 }
//                         }
//                 }
//                 // if (!cin)
//                 //         error("Could'nt read an int");

                
//                 // int len2 = userg.size();
                
//                 cout << bullz << " bulls and " << cowz << " cows\n";
//                 if (bullz == 4)
//                         restart = false;
//                 else
//                         cout << "Play again!!!\n";
//                 bullz = 0;
//                 cowz = 0;
//         }
// }

// int main()
// {
//         double left = 1;
//         cin >> left;
//         char c = 'a';
//         cin >> c;
        

//         // int n = left;
//                 switch (c) {
//                         case '!':
//                         {
//                                 // left = n;
//                                 for (int i = left - 1; i >= 1; i--)
//                                 {
//                                         left *= i;
//                                 }
//                                 if (left == 0)
//                                         left = 1;
//                                 break;
//                         }
//                 }
//         // cout << left << endl;
// }

double my_abs(int x)
{
        if (x < 0)
                return -x;
        cout << x << endl;
        x = 23;
        return x;
}

int main()
try {
        int x = 232;

        cout << my_abs(x) << endl;
        cout << x << endl;

        return 0;
}
catch (exception& e) {
        cerr << "Err: " << e.what() << endl;
}