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
#include <algorithm>
using namespace std;

/**
 * main - 'bleeps' out disliked words
 * Date: 7/14/2023
 * modified: 9/2/2023
 * 
 * Return: 0
*/
int main()
{
        int len, i, j;
        vector <string> disliked {"Broccoli", "Hatred", "lies", "dishonesty"};
        vector <string> words;
        vector <string> liked;
        string replace {"BLEEP"};
        string word;

        while (cout << "Enter a word" && cin >> word) {
                len = disliked.size();

                for (i = 0; i < len; ++i) {
                        liked.push_back(word);

                        if (i == 0 || liked[i - 1] != liked[i])
                        words.push_back(word);
                        if (word == disliked[i])
                        words.push_back(replace); 
                }
        }

        len = words.size();
        for (j = 0; j < len; ++j) {
                if (words[j + 1] != replace)
                cout << words[j] << endl;
        }
        return 0;
}
// Re-check this code, re-write/solve with pseudo code in mind. Vector not in the picture
// Code working properly