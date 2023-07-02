#include <iostream>

int main() {

    int age;
    std::cout << "Enter your real age: ";
    std::cin >> age;

    if (age < 100){
        std::cout << "\nYou are pretty young" << std::endl;
    }    
    else if ( age == 100){
        std::cout << "\nYou are old" << std::endl;
    }
    else {
       std::cout << "You are really old" << std::endl;
    }

    std::cout << "\nYour age is : " << age << std::endl;
    return 0;
}