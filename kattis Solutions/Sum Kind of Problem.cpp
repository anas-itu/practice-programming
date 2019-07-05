#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
	int num, th, x;
	cin >> num;
	for (int i = 0; i < num; ++i) {
		int a = 0, b = 0, c = 0;
		cin >> th >> x;
		for (int j = 1; j <= x; ++j) {
			a += j;
		}
		int n = 1, z = 1;
		while (n <= x) {
			if (z % 2 != 0) {
				b += z;
				++n;
			}
			++z;
		}
		n = 1; z = 1;
		while (n <= x) {
			if (z % 2 == 0) {
				c += z;
				++n;
			}
			++z;
		}
		cout << th << " " << a << " " << b << " " << c << endl;
	}


	return 0;
}
