// Chapter 6 - Writing a program
// Exercise 8
// Date: 26.03.2024

#include "../../std_lib_facilities.h" //external header file

class Token
{
        public:
        char kind;
        int value;

        // Token get_token();
        Token(char);
        Token(char, int);
};

class Tk
{
        public:
        Token get_token();
};

Token::Token (char ch)
        :kind(ch), value(0) 
        {

        }

Token::Token (char ch, int val)
        :kind(ch), value(val)
        {

        }


Token Tk::get_token()
{
        char ch;
        cin >> ch;

        switch(ch)
        {
                case '+': case '-': case '*': case '/': case '=':
                        return Token(ch);
                        break;

                case '0': case '1': case '2': case '3':
                case '4': case '5': case '6': case '7': case '8':
                case '9':
                {
                        cin.putback(ch);
                        int val;
                        cin >> val;
                        return Token('8', val);
                }
                break;
                default:
                error("Wrong parameter");
        }
        return 0;
}
Tk gt;
int main()
{
          vector <Token> tok;

          while (cin)
          {
                Token t = gt.get_token();
                        if(t.kind == '=')
                                break;
                tok.push_back(t);
          }
          double d = 0;
          for (int i = 0; i<tok.size(); ++i) {
                if (tok[i].kind=='*') { // we found a multiply!
                        d += tok[i - 1].value * tok[i + 1].value;
                                        // now what?
                        }
                }
                cout << d << endl;
}