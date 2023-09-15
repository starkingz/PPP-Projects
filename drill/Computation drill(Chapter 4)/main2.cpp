#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * main - read and print two integers. Terminate if input equals '|'
 * Date: 7/9/2023, 3:43 AM
 * Return: 0 (always)
*/
// int main()
// {
//         int val1, val2;

//         while (cout << "Enter two integers: " && cin >> val1 >> val2) {
//                 cout << "First integer value: " << val1 << endl
//                      << "Second integer value: " << val2 << endl;
//                 cout << "\n---------- Terminate program with \'|'----------\n";
//                 if (val1 == '|' || val2 == '|') {
//                         break;
//                 }
//         }
//         return 0;
// }

/**
 * main - modify first program
 * Description: print the smaller value and larger value between two ints
 * Date: 7/9/2023, 3:44 AM
 * 
 * Return: 0 (always)
*/
// int main()
// {
//         double val1, val2;
//         double smallest = 0;
//         double largest = 0;
        
//         while (cout << "Enter two numbers: " && cin >> val1 >> val2) {
//                 if (val1 < val2) {
//                         smallest = val1;
//                         largest = val2;
//                 }
//                 else {
//                         smallest = val2;
//                         largest = val1;
//                 }
//                 if (val1 == val2) {
//                         cout << "The numbers are equal\n";
//                 }
//                 else {
//                         cout << "The smaller value is: " << smallest << endl;
//                         cout << "The larger value is " << largest << endl;
//                         double diff {largest - smallest};
//                         if (diff < 1.0 / 100)
//                         cout << "The numbers are almost equal\n";
//                 }
//                 cout << "\n---------- Terminate program with \'|'----------\n";
//                 if (val1 == '|' || val2 == '|') {
//                         break;
//                 }
//         }
//         return 0;
// }

/**
 * main - Read one double and write out value the largest and smallest so far
 * 
 * Return: 0 (always)
*/
// int main()
// {
//         bool start {true};
//         double number;
//         double largest {0};
//         double smallest {0};

//         cout << "Enter a number (Type '|' to end): ";
//         while ( /* cout << "Enter a number (Type '|' to end): " */ cin >> number) {
//                 if (start == true) {            // only for first input value
//                         start = false;
//                         smallest = number;
//                         largest = number;
//                         cout << number << " the smallest and largest so far\n";
//                 }
//                 else if (number < smallest) {
//                         smallest = number;
//                         cout << smallest << " the smallest so far\n";
//                 }
//                 else if (number > largest) {
//                         largest = number;
//                         cout << largest << " the largest so far\n";
//                 }
//                 else {
//                         cout << number << endl;
//                 }
//         }

//         return 0;
// }
// double unit_converter(double, string);

// double unit_converter(double val, string unit)
// {
//         const double per_m = 100;       // 1m == 100cm
//         const double per_cm = 1 / per_m;     // 1cm == 0.01m
//         const double per_in = 2.54;     // 1in == 2.54cm
//         const double per_ft = 12;       // 1ft == 12in
//         double result = 0;

//         if (unit == "cm")
//                 result = per_cm * val;
//         else if (unit == "in")
//                 result = per_in * per_cm * val;
//         else if (unit == "ft")
//                 result = per_ft * per_in * per_cm * val;
//         else if (unit == "m")
//                 result = val;
//         else
//                 result = 0;
//         return result;
// }

// int main()
// {
//         bool first {true};
//         bool start {true};
//         double num;
//         double largest {0};
//         double smallest {0};
//         double converted {0};
//         string unit {""};
//         
//         cout << "Enter a number with a unit (Type '|' to end): ";
//         while ( /* cout << "Enter a number (Type '|' to end): " */ cin >> num >> unit) {
//                 converted = unit_converter(num, unit);
//                 if (first == true) {            // only for first input value
//                         first = false;
//                         smallest = converted;
//                         largest = converted;
//                         cout << num  << unit << " the smallest and largest so far\n";
//                 }
//                 else if (converted < smallest) {
//                         smallest = converted;
//                         cout << num  << unit << " the smallest so far\n";
//                 }
//                 else if (converted > largest) {
//                         largest = converted;
//                         cout << num << unit << " the largest so far\n";
//                 }
//                 else {
//                         cout << num << unit << endl;
//                 }
//         }

//         return 0;
// }

// double unit_converter(double, string);

// double unit_converter(double val, string unit)
// {
//         const double per_m = 100;       // 1m == 100cm
//         const double per_cm = 1 / per_m;     // 1cm == 0.01m
//         const double per_in = 2.54;     // 1in == 2.54cm
//         const double per_ft = 12;       // 1ft == 12in
//         double result = 0;

//         if (unit == "cm")
//                 result = per_cm * val;
//         else if (unit == "in")
//                 result = per_in * per_cm * val;
//         else if (unit == "ft")
//                 result = per_ft * per_in * per_cm * val;
//         else if (unit == "m")
//                 result = val;
//         else
//                 result = 0;
//         return result;
// }

// int main()
// {
//         bool first {true};
//         // bool start {true};
//         double num;
//         double largest {0};
//         double smallest {0};
//         double converted {0};
//         string unit {""};

//         cout << "Enter a number with a unit (Type '|' to end): ";
//         while ( /* cout << "Enter a number (Type '|' to end): " */ cin >> num >> unit) {

//                 if (unit == "m" || unit == "cm" || unit == "in" || unit == "ft") {
//                 converted = unit_converter(num, unit);
//                 if (first == true) {            // only for first input value
//                         first = false;
//                         smallest = converted;
//                         largest = converted;
//                         cout << num  << unit << " the smallest and largest so far\n";
//                 }
//                 else if (converted < smallest) {
//                         smallest = converted;
//                         cout << num  << unit << " the smallest so far\n";
//                 }
//                 else if (converted > largest) {
//                         largest = converted;
//                         cout << num << unit << " the largest so far\n";
//                 }
//                 else {
//                         cout << num << unit << endl;
//                 }
//                 }
//                 else 
//                 cout << "Wrong unit representation\n";
//         }

//         return 0;
// }

// double convert_to_meter(double, string);

// double convert_to_meter(double val, string unit)
// {
//         const double per_m = 100;       // 1m == 100cm
//         const double per_cm = 1 / per_m;     // 1cm == 0.01m
//         const double per_in = 2.54;     // 1in == 2.54cm
//         const double per_ft = 12;       // 1ft == 12in
//         double result = 0;

//         if (unit == "cm")
//                 result = per_cm * val;
//         else if (unit == "in")
//                 result = per_in * per_cm * val;
//         else if (unit == "ft")
//                 result = per_ft * per_in * per_cm * val;
//         else if (unit == "m")
//                 result = val;
//         else
//                 result = 0;
//         return result;
// }

// int main()
// {
//         bool first {true};
//         // bool start {true};
//         double num;
//         double largest {0};
//         double smallest {0};
//         string largest_unit {""};
//         string smallest_unit {""};
//         double largest_num {0};
//         double smallest_num {0};
//         double converted {0};
//         string unit {""};
//         double sum = {0};
//         int count {0};

//         cout << "Enter a number with a unit (Type '|' to end): ";
//         while ( /* cout << "Enter a number (Type '|' to end): " */ cin >> num >> unit) {

//                 if (unit == "m" || unit == "cm" || unit == "in" || unit == "ft") {
//                         sum += num;     // Sum every input
//                         ++count;        // Count every right input 
//                         converted = convert_to_meter(num, unit);
//                         if (first == true) {            // only for first input value
//                                 first = false;
//                                 smallest = converted;
//                                 largest = converted;
//                                 smallest_unit = unit;
//                                 largest_unit = unit;
//                                 largest_num = num;
//                                 smallest_num = num;
//                                 cout << num  << unit << " the smallest and largest so far\n";
//                         }
//                         else if (converted < smallest) {
//                                 smallest = converted;
//                                 smallest_unit = unit;
//                                 smallest_num = num;
//                                 cout << num  << unit << " the smallest so far\n";
//                         }
//                         else if (converted > largest) {
//                                 largest = converted;
//                                 largest_unit = unit;
//                                 largest_num = num;
//                                 cout << num << unit << " the largest so far\n";
//                         }
//                         else {
//                                 cout << num << unit << endl;
//                         }
//                 }
//                 else {
//                 cout << "Wrong unit representation\n";
//                 }
//         }
//         cout << "The smallest: " << smallest_num << smallest_unit << endl;
//         cout << "The largest: " << largest_num << largest_unit << endl;
//         cout << "The number  of values: " << count << endl;
//         cout << "Sum of values: " << sum << "m" << endl;

//         return 0;
// }

// double convert_to_meter(double, string);

// double convert_to_meter(double val, string unit)
// {
//         const double per_m = 100;       // 1m == 100cm
//         const double per_cm = 1 / per_m;     // 1cm == 0.01m
//         const double per_in = 2.54;     // 1in == 2.54cm
//         const double per_ft = 12;       // 1ft == 12in
//         double result = 0;

//         if (unit == "cm")
//                 result = per_cm * val;
//         else if (unit == "in")
//                 result = per_in * per_cm * val;
//         else if (unit == "ft")
//                 result = per_ft * per_in * per_cm * val;
//         else if (unit == "m")
//                 result = val;
//         else
//                 result = 0;
//         return result;
// }

// int main()
// {
//         bool first {true};
//         // bool start {true};
//         double num;
//         double largest {0};
//         double smallest {0};
//         string largest_unit {""};
//         string smallest_unit {""};
//         double largest_num {0};
//         double smallest_num {0};
//         double converted {0};
//         string unit {""};
//         double sum = {0};
//         int count {0};
//         vector <double> valmeter;
//         int i, len;
//         char meter {'m'};

//         cout << "Enter a number with a unit (Type '|' to end): ";
//         while ( /* cout << "Enter a number (Type '|' to end): " */ cin >> num >> unit) {

//                 if (unit == "m" || unit == "cm" || unit == "in" || unit == "ft") {
//                         sum += num;     // Sum every input
//                         ++count;        // Count every right input 
//                         converted = convert_to_meter(num, unit);
//                         valmeter.push_back(converted);
//                         if (first == true) {            // only for first input value
//                                 first = false;
//                                 smallest = converted;
//                                 largest = converted;
//                                 smallest_unit = unit;
//                                 largest_unit = unit;
//                                 largest_num = num;
//                                 smallest_num = num;
//                                 cout << num  << unit << " the smallest and largest so far\n";
//                         }
//                         else if (converted < smallest) {
//                                 smallest = converted;
//                                 smallest_unit = unit;
//                                 smallest_num = num;
//                                 cout << num  << unit << " the smallest so far\n";
//                         }
//                         else if (converted > largest) {
//                                 largest = converted;
//                                 largest_unit = unit;
//                                 largest_num = num;
//                                 cout << num << unit << " the largest so far\n";
//                         }
//                         else {
//                                 cout << num << unit << endl;
//                         }
//                 }
//                 else {
//                 cout << "Wrong unit representation\n";
//                 }
//         }
//         cout << "The smallest: " << smallest_num << smallest_unit << endl;
//         cout << "The largest: " << largest_num << largest_unit << endl;
//         cout << "The number  of values: " << count << endl;
//         cout << "Sum of values: " << sum << meter << endl;

//         len = valmeter.size();
//         for (i = 0; i < len; i++) {
//                 cout << "Value [" << i + 1 << "]: " << valmeter[i] << meter << endl; 
//         }

//         return 0;
// }


double convert_to_meter(double, string);

double convert_to_meter(double val, string unit)
{
        const double per_m = 100;       // 1m == 100cm
        const double per_cm = 1 / per_m;     // 1cm == 0.01m
        const double per_in = 2.54;     // 1in == 2.54cm
        const double per_ft = 12;       // 1ft == 12in
        double result = 0;

        if (unit == "cm")
                result = per_cm * val;
        else if (unit == "in")
                result = per_in * per_cm * val;
        else if (unit == "ft")
                result = per_ft * per_in * per_cm * val;
        else if (unit == "m")
                result = val;
        else
                result = 0;
        return result;
}

int main()
{
        bool first {true};
        // bool start {true};
        double num;
        double largest {0};
        double smallest {0};
        string largest_unit {""};
        string smallest_unit {""};
        double largest_num {0};
        double smallest_num {0};
        double converted {0};
        string unit {""};
        double sum = {0};
        int count {0};
        vector <double> valmeter;
        int i, len;
        char meter {'m'};

        cout << "Enter a number with a unit (Type '|' to end): ";
        while ( /* cout << "Enter a number (Type '|' to end): " */ cin >> num >> unit) {

                if (unit == "m" || unit == "cm" || unit == "in" || unit == "ft") {
                        sum += num;     // Sum every input
                        ++count;        // Count every right input 
                        converted = convert_to_meter(num, unit);
                        valmeter.push_back(converted);
                        if (first == true) {            // only for first input value
                                first = false;
                                smallest = converted;
                                largest = converted;
                                smallest_unit = unit;
                                largest_unit = unit;
                                largest_num = num;
                                smallest_num = num;
                                cout << num  << unit << " the smallest and largest so far\n";
                        }
                        else if (converted < smallest) {
                                smallest = converted;
                                smallest_unit = unit;
                                smallest_num = num;
                                cout << num  << unit << " the smallest so far\n";
                        }
                        else if (converted > largest) {
                                largest = converted;
                                largest_unit = unit;
                                largest_num = num;
                                cout << num << unit << " the largest so far\n";
                        }
                        else {
                                cout << num << unit << endl;
                        }
                }
                else {
                cout << "Wrong unit representation\n";
                }
        }
        cout << "The smallest: " << smallest_num << smallest_unit << endl;
        cout << "The largest: " << largest_num << largest_unit << endl;
        cout << "The number  of values: " << count << endl;
        cout << "Sum of values: " << sum << meter << endl;

        sort(valmeter.begin(), valmeter.end());
        len = valmeter.size();
        for (i = 0; i < len; i++) {
                cout << "Sorted Value [" << i + 1 << "]: " << valmeter[i] << meter << endl; 
        }

        return 0;
}