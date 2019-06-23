#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

	char word[30][50];
	int num, a = 0;

	cin >> num;

	while (num != 0) {
		a += 1;
		cout << "SET " << a << endl;

		for (int i = 0; i < num; ++i) {
			cin >> word[i];
		}
		for (int i = 0; i < num; ++i) {
			if (i % 2 == 0) {
				cout << word[i] << endl;
			}
		}
		for (int i = (num - 1); i >= 0; --i) {
			if (i % 2 != 0) {
				cout << word[i] << endl;
			}
		}
		cin >> num;
	}
	return 0;
}

