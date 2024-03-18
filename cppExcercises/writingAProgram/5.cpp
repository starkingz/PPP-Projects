// Chapter 6 - Writing a program
// Exercise 5
// Date: 15.03.2024

#include "../../std_lib_facilities.h"

vector <string> noun;
vector <string> verb;
vector <string> conj;

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
        conj.push_back("and");
        conj.push_back("or");
        conj.push_back("but");

}

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
        // return false;
}

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
        // return false;
}

bool is_sentence()
{
        if (!is_noun())
                return false;
        if (!is_verb())
                return false;

        string dot;
        cin >> dot;
        if (dot == ".")
                return true;
        if (!is_conj())
                return false;
        // return true;
}

int main()
{
        init();
        string sen;
        bool ok {false};

        while (cin) {
                if (sen == ".")
                        ok = true;
                if (sen == "|")
                {
                        if (ok == true)
                                cout << "OK\n";
                        else
                                cout << "not OK\n";
                }
        }
        return 0;
}