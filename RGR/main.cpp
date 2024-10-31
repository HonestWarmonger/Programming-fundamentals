#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Enter sequence:" << endl;

    string input;
    cin >> input;

    bool result = true;
    int last_chance = 0;

    if ((input[0] == '+') && (input[1] >= '0' && input[1] <= '9')) {
        result = true;
    }
    else {
        result = false;
    }

    if (result) {
        for (int i = 1; (i < input.size()) && result; i++) {
            if (!(input[i] >= '0' && input[i] <= '9')) {
                last_chance++;
                for (int last = i + 1; (last < input.size()) && result; last++) {
                    result = (input[last] >= 'P' && input[last] <= 'Z');
                }
            }
        }
        result = (last_chance != 0);
    }

    cout << result << endl;
    return 0;
}