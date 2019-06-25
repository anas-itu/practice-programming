#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main() {
	int x;
	cin >> x;
	cout << x << ":" << endl;
	for (int i = 2; i <= x / 2 + 1; ++i) {
		for (int a = 32767 / i + 1; a >= 1; --a) {

			if (i * a + (i - 1) * (a - 1) == x || i * a + (i - 1) * a == x) {
				cout << i << "," << i - 1 << endl;
			}
			if (i * a + i * (a - 1) == x || i * a + i * a == x) {
				cout << i << "," << i << endl;
			}
		}
	}
	return 0;
}
