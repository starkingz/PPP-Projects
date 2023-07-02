// Chapter 3: Objects, types and values drill *1
// A simple program that produces a simple form letter
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    cout << "Enter your first name: ";
    string my_first_name;
    cin >> my_first_name;
    cout << "Enter your last name: ";
    string my_last_name;
    cin >> my_last_name;
    string full_name = my_first_name + " " + my_last_name;
    cout << "Enter the name of the person you want to write to: ";
    string first_name;
    cin >> first_name;
    cout << "Enter the name of another friend: ";
    string friend_name;
    cin >> friend_name;
    cout << "Enter an 'm' if the friend is male and 'f' if the friend is female: ";
    char friend_sex {'0'};
    cin >> friend_sex;
    cout << "Enter the age of the recipient: ";
    int age {0};
    cin >> age;

    cout << "\nDear " << first_name << ",\n"
         << "   How are you doing? I am fine. I miss you.\n"
         << "It is been quite a long time we last saw each\n"
         << "other,i bet you look completely different now.\n";
    cout << "   Have you seen " << friend_name << " lately?" << endl;
    if (friend_sex == 'm'){
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    } 
    if (friend_sex == 'f'){
        cout << "If you see " << friend_name << " please ask her to call me." << endl;
    }
    cout << "I heard you just had a birthday party and"
         << " you are " << age << " years old.\n";
    if (((age <= 0) || (age >= 110))){
        cout << "You're kidding!";
    }
    if (age < 12){
        cout << "Next year you will be " << age + 1 << endl;
    }
    if (age == 17){
        cout << "Next year you will be able to vote" << endl;
    }
    if (((age > 70) && (age < 110))){
        cout << "I hope you are enjoying retirement" << endl;
    }
    cout << "Yours Sincerely" << endl << endl << endl;
    cout << full_name << "\n";

    return 0;
}
