#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>
#include <sstream>
#include <vector>
const double pi = acos(-1);
using namespace std;

int main() {
	int num;
	string a = "Simon says ";
	string s;
	cin >> num;
	cin.ignore();
	for (int i = 0; i < num; ++i) {
		int x = 0;
		getline(cin, s);
		for (int j = 0; j <= 10; ++j) {
			if (a[j] == s[j])
				++x;
			else
				continue;
		}
		if (x == 11) {
			for (int y = 11; y < (int) s.length(); ++y) {
				cout << s[y];
			}
			cout << endl;
		}

	}

	return 0;
}
