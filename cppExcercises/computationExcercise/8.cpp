#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
        vector <int> comp_vals {1, 2, 1, 1, 3, 1, 2, 3, 3, 1, 3};
        cout << "ROCK [1], PAPER [2], SCISSOR [3] GAMEPLAY\n";
        cout << "Rock, paper, scissor shoot: " << endl;
        int val;
        int len = comp_vals.size();

        for (int i = 0; i < len; i++) {
                cout << "Rock, paper, scissor shoot: " << endl;
                cin >> endl;
                switch (val) {
                        case 1:
                        switch (comp_vals[i]) {
                                case 1:
                                cout << "Draw.\n";
                                break;
                                case: 2:
                                cout << "Computer wins.\n";
                                break;
                                default:
                                cout << "You win.\n";
                                break;
                        }
                        break;
                        case 2:
                        switch (comp_vals[i]) {
                                case 1:
                                cout << "You win.\n";
                                break;
                                case 2:
                                cout << "Draw.\n";
                                break;
                                default:
                                cout << "Computer wins.\n";
                                break;
                        }
                        break;
                        case 3:
                        switch (comp_vals[i]) {
                                case 1:
                                cout << "Computer wins.\n";
                                break;
                                case 2:
                                cout << "You win.\n";
                                break;
                                case 3:
                                cout << "Draw.\n";
                                break;
                        }
                        break;
                }
        }
}