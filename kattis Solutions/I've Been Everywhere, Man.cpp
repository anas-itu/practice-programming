#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int t, b, tot = 0;
	string d[101];
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> b;
		tot = 0;
		for (int c = 0; c < b; ++c) {
			cin >> d[c];
			int foundBefore = 0;
			for (int j = 0; j < c; ++j) {
				if (d[j] == d[c])
					foundBefore = 1;
			}
			if (foundBefore == 0)
				++tot;
		}
		cout << tot << endl;
	}
	return 0;
}
