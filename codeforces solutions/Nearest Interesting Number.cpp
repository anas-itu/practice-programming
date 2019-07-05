#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
	int x;
	cin >> x;
	while (true) {
		int y = x;
		int sum = 0;
		while (y != 0) {
			sum += y % 10;
			y /= 10;
		}
		if (sum % 4 == 0) {
			cout << x;
			break;
		} else if(sum % 4 != 0)
			++x;
	}
	return 0;
}
