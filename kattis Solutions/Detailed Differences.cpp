#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

	int num;
	string s1, s2;

	cin >> num;

	int i;
	for (i = 0; i < num; ++i) {
		cin >> s1 >> s2;
		cout << s1 << endl << s2 << endl;
		for (int j = 0; j < (int) s1.size(); ++j) {

			if (s1[j] != s2[j])
				cout << '*';
			else if (s1[j] == s2[j])
				cout << '.';
		}
		cout << endl << endl;
	}

	return 0;
}
