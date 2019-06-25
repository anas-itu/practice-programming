#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int s;
	cin >> s;
	cout << s << ":\n";
	for (int i = 2; i < s; i++) {
		if (s % (2 * i - 1) == 0 || s % (2 * i - 1) == i)
			cout << i << "," << i - 1 << endl;
		if (s % i == 0)
			cout << i << "," << i << endl;
	}
	return 0;
}
