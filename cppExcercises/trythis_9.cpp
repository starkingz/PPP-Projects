/** 
 * Question:  Write a program that “bleeps” out words that you don’t like; that is, you ..
 * .. read in words using cin and print them again on cout. If a word is among a ..
 * .. few you have defined, you write out BLEEP instead of that word. Start with ..
 * .. one “disliked word” such as
 * .. string disliked = “Broccoli”;
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**
 * main - 'bleeps' out disliked words
 * Date: 7/14/2023
 * 
 * Return: 0
*/
int main()
{
        std::vector <string> words;
        std::string disliked[] = {"Broccoli", "Word", "hello"};

        for (std::string word; cout << "Input: " && std::cin >> word;) {
                words.push_back(word);

                int len = words.size();
                for (int i = 0; i < len; i++) {

                        // int len2 = disliked.size();
                        if (words[i] == disliked[0] || words[i] == disliked[1] || words[i] == disliked[2]) {
                                std::cout << "BLEEP\n";
                        } 
                        else {
                                std::cout << words[i] << std::endl;
                        }
                }
        }
        return 0;
}