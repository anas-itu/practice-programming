#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

    string word;

    cin >> word;
    cout << word[0];
    for (int i = 0; i < (int)word.size() - 1; ++i) {
        if (word[i] == word[i + 1])
            continue;
        else
            cout << word[i + 1];
    }

    return 0;
}
