#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
        bool playagain {yes};
        vector <int> comp_vals {1, 2, 1, 1, 3, 1, 2, 3, 3, 1, 3};
        cout << "ROCK [1], PAPER [2], SCISSOR [3] GAMEPLAY\n";
        // cout << "Rock, paper, scissor shoot: " << endl;
        int val;
        int len = comp_vals.size();

        if (playagain == yes) {
        for (int i = 0; i < len; i++) {
                cout << "Rock, paper, scissor shoot: " << endl;
                cin >> val;
                switch (val) {
                        case 1:
                        switch (comp_vals[i]) {
                                case 1:
                                cout << "You play: ROCK\n"
                                     << "Computer plays: ROCK\n"
                                     << "Draw.\n";
                                break;
                                case 2:
                                cout << "You play: ROCK\n"
                                     << "Computer plays: PAPER"
                                     << "Computer wins.\n";
                                break;
                                default:
                                cout << "You play: ROCK\n"
                                     << "Computer plays: SCISSORS\n"
                                     << "You win.\n";
                                break;
                        }
                        break;
                        case 2:
                        switch (comp_vals[i]) {
                                case 1:
                                cout << "You play: PAPER\n"
                                     << "Computer plays: ROCK\n"
                                     << "You win.\n";
                                break;
                                case 2:
                                cout << "You play: PAPER\n"
                                     << "Computer plays: PAPER"
                                     << "Draw.\n";
                                break;
                                default:
                                cout << "You play: PAPER\n"
                                     << "Computer plays: SCISSORS\n"
                                     << "Computer wins.\n";
                                break;
                        }
                        break;
                        case 3:
                        switch (comp_vals[i]) {
                                case 1:
                                cout << "You play: SCISSORS\n"
                                     << "Computer plays: ROCK\n"
                                     << "Computer wins.\n";
                                break;
                                case 2:
                                cout << "You play: SCISSORS\n"
                                     << "Computer plays: PAPER\n"
                                     << "You win.\n";
                                break;
                                case 3:
                                cout << "You play: SCISSORS\n"
                                     << "Computer plays: SCISSORS\n"
                                     << "Draw.\n";
                                break;
                        }
                        break;
                        default:
                        cout << "Invalid value.\n";
                        break;
                }
                cout << "Do you want to play again? (yes/no)\n";
                cin >> playagain;
                switch (i) {
                        case len:
                        cout << "Game Over.\n";
                        break;
                }
        }
        }
        else {
                cout << "Game Over.\n";
        }

        return 0;


}