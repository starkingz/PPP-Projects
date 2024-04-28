// Chapter 6 - Writing a program
// Exercise 6
// Date: 15.03.2024

#include "../../std_lib_facilities.h"

vector <string> noun;
vector <string> verb;
vector <string> conju;

void init()
{
        // put words in noun
        noun.push_back("birds");
        noun.push_back("fish");
        noun.push_back("c++");

        // put words in verb
        verb.push_back("rules");
        verb.push_back("fly");
        verb.push_back("swim");

        // put words into conj
        conju.push_back("and");
        conju.push_back("or");
        conju.push_back("but");

}

// deal with noun
bool is_noun()
{
        string s;
        cin >> s;
        int len = 0;

        len = noun.size();
        for (int i = 0; i < len; i++)
        {
                if (s == noun[i])
                        return true;
        }
        return false;
}

// deal with verb
bool is_verb()
{
        string s;
        cin >> s;
        int len = 0;

        len = verb.size();
        for (int i = 0; i < len; i++)
        {
                if (s == verb[i])
                        return true;
        }
        return false;
}
bool is_sentence();

// deal with conjunction
bool is_conju()
{
        string s;
        cin >> s;
        int len = 0;

        if (s == ".")
                return true;
        len = conju.size();
        for (int i = 0; i < len; i++)
        {
                if (s == conju[i])
                        return is_sentence();
        }
        return false;

}

bool is_sentence()
{
                if (!is_noun())
                        return false;
                if (!is_verb())
                        return false;
                if (is_conju())
                        return true;
        return false;
}

int main()
{
        init();

        cout << "Enter a sentence of the simplified grammar (terminated by a dot): \n";
        while (cin) {
                bool ok = is_sentence();
                if (ok)
                        cout << "OK\n";
                else
                        cout << "not OK\n";
                cout << "Try again: \n";
        }
        return 0;
}
