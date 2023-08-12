#include <iostream>
#include <math.h>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

// int main() {
//     int a = 3;
//     a = 4;
//     int b = a;
//     b = a + 7;
//     a = a + b;
//     a = a + 7;
//     cout << a << "\n" << b;

// }

// int main() {
//     string a;
//     a = "bet";
//     string b = a;
//     a = "alpha";
//     a = a + b;

//     cout << a;

//     return 0;
// }

// int main(){

//     int y = 8;
//     x = 6;
// }
// 
// /**************************
//  * a simple program that prints out your name 
// **********************************/ 
// int main(){
//          string first_name;
//          cout << "Enter your first name: ";
//          cin >> first_name;

//         cout << "Enter your middle name: ";
//         string middle_name;
//         cin >> middle_name;

//         string last_name;
//          cout << "Enter your last name: ";
//          cin >> last_name;

//         string name = last_name + ", " + middle_name + " " + first_name;

//          cout << "\nHello " << first_name << " your full name is " << name << endl;

//          return 0;
// }
/******************************************
 *       check for repeated words
******************************************/
// int main(){
//     int no_of_word {0};
//     string previous {""};
//     string current;

//     while (cin >> current){
//         ++no_of_word;
//         if (previous == current){
//             cout << "word number: "<< no_of_word << endl;
//             cout << "Repeated: " << current << endl;
//         }
//         previous = current;
//     }
//     return 0;
// }

// int main(){
//     double d1 {-2.3};
//     double d2 {d1 + 2};


//     if (d1 < 0){
//        cout << "error(\"d1 is negative\")";
//     }
//     return 0;
// }
// int main(){
// int a = 2000;
// char ch = a;
// int b = ch;

// if(a != b){
//     cout << "oops " << a << " is not equal to " << b  << endl;
// }
// else {
//     cout << "Great we have a big number" << endl;
// }
// return 0;
// }
/************************************************
*       try to convert int to char
************************************************/ 
// int main(){
//     int i = 20;
//     char c = i;
//     int i1 = c;
//     cout << i1;
// }
/******************************************************************
*       conversion from char to int and int to char
*******************************************************************/
// int main(){
//     char c {'x'};
//     int n {c};
//     int n1 {'x'};

//     char c2 = n;
//     cout << c << n << c2 << endl;

//     return 0;
// }
/*************************
*   loop
**************************/
// int main(){
//     char alpha{'a'};

//     for(alpha = 'a'; alpha <= 'z'; alpha++){
//         if(!((alpha == 'e') || (alpha == 'h'))){ //make 'e' and 'h' an exception
//             cout << alpha;
//         }
        
//     }
//     cout << endl; // end of line
//     return 0;
// }
/*
*              
*/
// #include <iostream>
// #include <cstdio>
// using namespace std;

// int main() {
//     // Complete the code.
//     int n (0);
//     int a {0};
//     int b {0};
//     for(n = 1; n <= 35; n++){
//             if (n == 1){
//                     cout << "one" << endl;
//             }
//             if (n == 2){
//                     cout << "two" << endl;
//             }
//             if (n == 3){
//                     cout << "three" << endl;
//             }
//             if (n == 4){
//                     cout << "four" << endl;
//             }
//             if (n == 5){
//                     cout << "five" << endl;
//             }
//             if (n == 6){
//                     cout << "six" << endl;
//             }
//             if (n == 7) {
//             cout << "seven" << endl;
//             }
//             if(n == 8){
//             cout << "eight" << endl;
//             }
//             if(n == 9){
//                     cout << "nine" << endl;
//             }
//             if (n > 9){
//                 // even number is divisible by 2 and always has a remainder of 0
//                if (n%2 == 0){
//                     cout << "even" << endl;
//                 }
//             }
//             if (n > 9) {
//                 //odd number is not divisible by 2 and alwas has a remainder of 1
//                 if (n%2 == 1){
//                     cout << "odd" << endl;
//                 }
//             }      
//     }
//     return 0;
// }
// int main(){
// long long people_on_earth {7600000000};

// std::cout << "There are about " << people_on_earth << " people on earth\n";
// return 0;
// }

// int main()
// {
//     cout << "Please enter your first name and age: ";
//     string first_name = "???";
//     int age = -1;
//     cin >> first_name >> age;
//     cout << "Hello, " << first_name << " (age " << age << ")\n"; 
// }

/*******************************************************
*              types and objects
*******************************************************/
// int main()
// {
//     char val2 = 'x';
//     int i2 = val2;
//     int val3 = 'x'; 
//     char val4 = i2;  
//     cout << val2 << " " << i2 << " " << val4;
//     return 0;
// }

/**********************************
 * Exercise to print name and age
**********************************/
// int main()
// {
//     cout << "Enter your First Name and age: ";
//     string first_name = "0";
//     int age = 0;
//     cin >> first_name >> age;

//     double new_age = age + 0.5;

//     cout << "First Name: " << first_name << ", Age: " << new_age << " years\n";

//     return 0;
// }

/**********************************************
*   Unsafe conversion(Narrowing)
*********************************************/
// int main(){
//     int i = 20000;
//     char c = i;
//     int d = c;

//     if (d != i)
//     cout << d << " != " << i << endl;
//     else
//     cout << "Wow! We have a large character" << endl;

//     return 0;
// }
/********************************
 *      String concatenation
********************************/
// int main(){
//     string first_name = "Goodstar";
//     string second_name = "Ohia";

//     string name = "Hello " + first_name + " " + second_name;

//     cout << name << endl;
//     return 0;
// }

/*********************************************************
 * Conversion of degrees Censius to degrees Fahrenheit
// *********************************************************/
// int main()
// {
//     cout << "- Conversion from degree censius to degree fahrenheit" 
//     << endl << endl;    
//     cout << "Enter a value in degree Censius:\n";
//     double dc;
//     cin >> dc;
//     double df = 9/5.0 * dc + 32;
//     cout << "Result: " << df << " degrees Fahrenheit" << endl;
//     cout << endl;
//     cout << "- End of conversion" << endl;

//     return 0;
// }

/************************************************************
 * main - illustrating an empty if statement
 * Description: Empty if statement executes but..
 * ..has effect to nothing, if the condition is true .. 
 * .. it skips the statements and prints nothing
 * 
 * Return: always 0 (success)
************************************************************/
// int main(){

//     cout << "Enter two numbers, x and y: ";
//     int x, y;
//     cin >> x >> y;

//     if (x == 5); //Example of an empty if statement
//     y = 3; // Asign 3 to y
//     cout << "x == " << x
//          << " y == " << y;
//     return 0;
// }

/**
 * main - a game that asks the user for a random number
 * 
*/
// int main(){
//     // int num = 0;

//     cout << "Firstly: Enter your first name: ";
//     string first_name;
//     cin >> first_name;
//     cout << "Hello " << first_name << "! Are you ready to play a game? type 'y' if Yes or 'n' if No\n";
//     char response;
//     cin >> response;

//     if (response == 'y')
//     {
//     cout << "Ok, lets begin\n";

//     }
//     else if (response == 'n')
//     cout << "Ok, bye! Hope to see you again.\n";
//     else
//     cout << "Incorrect response\n";

//     return 0;
// }
// int main(){
//     int n = 0;
//     int n2 = 0;
    
//     cout << "Please enter two integers: ";
//     cin >> n >> n2;

//     if (n < n2)
//     cout << "Max(" << n << ", " << n2 << ") is " << n2 << endl;
//     else if (n > n2)
//     cout << "Max(" << n << ", " << n2 << ") is " << n << endl;
//     else if (n == n2)
//     cout << "Same number" << endl;
//     return 0;
// }
/**
 * *********************  Version 1  *************************
 * Convert from inches to centimeters or centimeters to inches
 * a suffix 'i' or 'c' indicate the unit of the input 
*/
// int main()
// {
//     const double cm_per_inch = 2.54;
//     double length = 1;
//     char unit = 0;

//     cout << "Please enter a length followed by a unit (c or i):\n";
//     cin >> length >> unit;
//     if (unit == 'i')
//     cout << length << "in == " << cm_per_inch * length << "cm\n";
//     else
//     cout << length << "cm == " << length/cm_per_inch << "in\n";
// }
// /**
//  * ********************** Version 2 ***************************
//  * Convert from inches to centimeters or centimeters to inches
//  * Suffix 'i' or 'c' indicates the units of the input
//  * any other suffix is an error
// */
// int main()
// {
//     const double cm_per_inch = 2.54;
//     double length = 0;
//     char unit = 0;

//     cout << "Please enter a length followed by a unit (c or i):\n";
//     cin >> length >> unit;
//     if (unit == 'i')
//     cout << length << "in == " << cm_per_inch * length << "cm\n";
//     else if (unit == 'c')
//     cout << length << "cm == " << length/cm_per_inch << "in\n";
//     else
//     cout << "Sorry, i don't know a unit with " << unit << " as abbreviation" << endl;
// }

/**
 * Converts yen, euros and pounds into dollar
 * Suffix 'y' or 'e' or 'p' indicates the currency name
 * any other suffix is an error
*/
// int main()
// {
//     const double pounds_per_dollar_rate = 1.26;
//     const double yen_per_dollar_rate = 0.0072;
//     const double euros_per_dollar_rate = 1.08;
//     double currency_amount = 0;
//     char currency = 0;

//     cout << "Please enter an amount followed by currency (y = yen or p = pounds or e = euros):\n";
//     cin >> currency_amount >> currency;
//     if (currency == 'y')
//     cout << currency_amount << " yen == " << yen_per_dollar_rate * currency_amount << " USD\n";
//     else if (currency == 'p')
//     cout << currency_amount << " pounds == " << pounds_per_dollar_rate * currency_amount << " USD\n";
//     else if (currency == 'e')
//     cout << currency_amount << " euros == " << euros_per_dollar_rate * currency_amount << " USD\n";
//     else
//     cout << "Currency not available" << endl;

//     return 0;
// }

/**
 * Converts yen, euros and pounds into dollar using switch statements
 * Suffix 'y' or 'e' or 'p' indicates the currency name
 * any other suffix is an error
*/
// int main()
// {
//     const double pounds_per_dollar_rate = 1.26;
//     const double yen_per_dollar_rate = 0.0072;
//     const double euros_per_dollar_rate = 1.08;
//     double currency_amount = 0;
//     char currency = 0;

//     cout << "Please enter an amount followed by currency (y = yen or p = pounds or e = euros):\n";
//     cin >> currency_amount >> currency;
//     switch(currency)
//     {
//         case 'y':
//         cout << currency_amount << " yen == " << yen_per_dollar_rate * currency_amount << " USD\n";
//         break;
//         case 'p':
//         cout << currency_amount << " pounds == " << pounds_per_dollar_rate * currency_amount << " USD\n";
//         break;
//         case 'e':
//         cout << currency_amount << " euros == " << euros_per_dollar_rate * currency_amount << " USD\n";
//         break;
//         default:
//         cout << "Currency not available" << endl;  
//         break; 
//     }
//     return 0;
// }

/**
 * A function that calculates the square of each number
*/
// int _square(int a); //Function declaration

// // Function definition
// int _square(int a)
// {
//     int product = 0;
//     product = a * a;
//     return product;
// }
// int main()
// {
//     int i = 0;

//     while (i < 100)
//     {
//         cout << i << "\t" << _square(i) << endl; // Function call
//         i++; //increment i; i.e i becomes (i + 1 and so on ..) 
//     }
//     return 0;
// }
// int main()
// {
//         vector <double> temps;
//         double temp;

//         while (cin >> temp)
//         {
//                 temps.push_back(temp);
//                 int temps_size = temps.size();
//                 for (int i = 0; i < temps_size; i++)
//                 cout << "temps (" << i << ") = " << temps[i] << endl;
//         }
//         return 0;
        
// }

/* main - Takes the size of array index and any integer values in the range of the index size .. 
*  .. and print the integer in reverse.
*  
*  Return: 0;
*/
// int main()
// {
//         int j = 0;
//         int arr[1000];
//         cin >> j;
//         for (int h = 0; h < j; h++)
//         {
//                 cin >> arr[h]; // read array value multiple times
//         }

//         for (int i = j - 1; i >= 0; i--)
//         {
//         cout << arr[i];
//         // if (!(arr[i] > arr[j])) /* code not working */
//         putchar(' ');
//         }
//         putchar('\n');
        

// }

/**
 * Print the respective a-z english word of a read input digit as , 1 < n < 9;
*/
// int main()
// {
// 	string s[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
// 	int n;
// 	cin >> n;
// 	if (n > 9)
// 	cout << "Greater than 9\n";
// 	else
// 	cout << s[n];
// }

// /**
//  * // Traversing a vector METHOD 01
//  * main - a program that traverse an int vector type using tradition for-loop;
//  * 
//  * Return: 0 
// */
// int main()
// {
//         vector <int> number = {5, 7, 9, 10};
//         int i;
//         int len = number.size();

//         for (i = 0; i < len; i++)
//         cout << number[i] << endl;

//         return 0;
// }

/**
 * // Traversing a vector METHOD 02
 * main - Traverse a string vector type using range for-loop
 * 
 * Return 0
*/
// int main()
// {
//         vector <string> str = {"hello", "how", "are", "you?"};

//         for (string i : str) // range-for-loop
//         cout << i << " ";
//         cout << endl;

//         return 0;
// }
/**
 * main - growing a vector
 * 
 * Return: 0 always success
*/
// int main()
// {
//         vector <double> d;
//         double vd; 
        
//         while (cout << "Enter a new number: " && cin >> vd) {
//         d.push_back(vd);
//         }
//         int len = d.size();
//         for (int i = 0; i < len; i++)
//         cout << "d[" << i << "] : " << d[i] << endl;
//         return 0;
// }

/**
 * main - calculate the mean and median of a temperature
 * Date: 7/13/2023
 * 
 * Return: 0;
*/

// int main()
// {
//         vector <double> temps;

//         for (double temp; cin >> temp;) {
//                 temps.push_back(temp);

//                 // Calculate the mean of the temperature
//                 double sum = 0;
//                 for (int x : temps)
//                 sum += x;
//                 cout << "Average temparature: " << sum/temps.size() << endl;

//                 //Calculate the median of the temperature
//                 sort(temps.begin(), temps.end());
//                 cout << "Median temperature: " << temps[temps.size()/2] << endl;
//         }

//         return 0;
// }

/**
 * main - simple dictionary: list sorted words
 * Date: 7/14/2023
 * 
 * Return 0
*/
// int main()
// {
//         vector <string> words;

//         for (string temp; cin >> temp;) {
//                 words.push_back(temp);
//         }

//                 int len = words.size();
//                 cout << "Number of words: " << len << endl;

//                 sort(words.begin(), words.end()); // sort vector elements
                
//                 for (int i = 0; i < len; ++i) {
//                 if (i == 0 || words[i - 1] != words[i]) // do not repeat a word 
//                 cout << words[i] << endl;
//                 }
//                 int sum = 0;
//                 for (int i = 0; i < len; i++) {
//                 if (words[i - 1] == words[i])
//                 ++sum; // sum of repeated words
//                 }
//                 cout << "Number of repeated words: " << sum << endl; 
        
//         return 0;
// }

/**
 * max - maximum value between two integer values
 * @val1: first paremeter
 * @val2: second paremeter
 * 
 * return: max value
*/
int max(int, int); // Function declaration

// Function definition
int max(int val1, int val2)
{
        int max_num = 0;

        if (val1 < val2)
        max_num = val2;
        else
        max_num = val1;

        return max_num;
}

/**
 * main - entry point
 * 
 * return: 0 always
*/
int main()
{
        int a = 0;
        int b = 0;

        cout << "Enter two values: ";
        cin >> a >> b;
        int max_num = 0;
        max_num = max(a, b);
        cout << "Max(" << a << "," << b << ") is " << max_num << endl;

        return 0;
}