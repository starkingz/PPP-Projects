#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int get_number(string);

int get_number(string s)
{
        int val;

        if (s == "Rock" || s == "rock")
        val = 1;
        else if (s == "Paper" || s == "paper")
        val = 2;
        else if (s == "Scissors" || s == "scissors")
        val = 3;
        
        return val;
}

int main()
{
        string playagain {"yes"};
        vector <int> comp_vals {1, 2, 1, 1, 3, 1, 2, 3, 3, 1, 3};

        cout << "ROCK [1], PAPER [2], SCISSORS [3] GAMEPLAY\n";
        string val;
        int len = comp_vals.size();
        int snum {0};
        int draw {0};
        int yourwins {0};
        int computerwins {0};

        
        if (playagain == "yes") {
                for (int i = 0; i < len; i++) {
                        cout << "Rock, Paper, Scissors shoot: " << endl;                        
                        cin >> val;
                        snum = get_number(val);

                        switch (snum) {
                                case 1:
                                switch (comp_vals[i]) {
                                        case 1:
                                        cout << "You play: ROCK\n"
                                             << "Computer plays: ROCK\n"
                                             << "Draw.\n";
                                             ++draw;
                                        break;
                                        case 2:
                                        cout << "You play: ROCK\n"
                                             << "Computer plays: PAPER"
                                             << "Computer wins.\n";
                                             ++computerwins;
                                        break;
                                        default:
                                        cout << "You play: ROCK\n"
                                             << "Computer plays: SCISSORS\n"
                                             << "You win.\n";
                                             ++yourwins;
                                        break;
                                }
                                break;
                                case 2:
                                switch (comp_vals[i]) {
                                        case 1:
                                        cout << "You play: PAPER\n"
                                             << "Computer plays: ROCK\n"
                                             << "You win.\n";
                                             ++yourwins;
                                        break;
                                        case 2:
                                        cout << "You play: PAPER\n"
                                             << "Computer plays: PAPER\n"
                                             << "Draw.\n";
                                             ++draw;
                                        break;
                                        default:
                                        cout << "You play: PAPER\n"
                                             << "Computer plays: SCISSORS\n"
                                             << "Computer wins.\n";
                                             ++computerwins;
                                        break;
                                }
                                break;
                                case 3:
                                switch (comp_vals[i]) {
                                        case 1:
                                        cout << "You play: SCISSORS\n"
                                             << "Computer plays: ROCK\n"
                                             << "Computer wins.\n";
                                             ++computerwins;
                                        break;
                                        case 2:
                                        cout << "You play: SCISSORS\n"
                                             << "Computer plays: PAPER\n"
                                             << "You win.\n";
                                             ++yourwins;
                                        break;
                                        case 3:
                                        cout << "You play: SCISSORS\n"
                                             << "Computer plays: SCISSORS\n"
                                             << "Draw.\n";
                                             ++draw;
                                        break;
                                }
                                break;
                                default:
                                cout << "Invalid value.\n";
                                break;
                        }
                        cout << "Do you want to play again? (yes/no)\n";
                        cin >> playagain;

                        // 
                        if (playagain == "yes") {
                                playagain = "yes";
                        }
                        else if (playagain == "no") {
                                cout << "Game Over.\n";
                                break;
                        }
                        else {
                                cout << "Incorrect input, try again.\n";
                        }

                        // end of loop
                        if (i == len - 1)
                        cout << "Game Over.\n";
                }
        }
        cout << "You win: " << yourwins << ", computer wins: " << computerwins << " and draw: " << draw << endl;
        return 0;


}