#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

	int x, y, xn = 0, yn = 0, z;
	cin >> x >> y;

	while (x != 0) {
		z = x % 10;
		xn = xn * 10 + z;
		x /= 10;
	}

	z = 0;

	while (y != 0) {
		z = y % 10;
		yn = yn * 10 + z;
		y /= 10;
	}

	if (xn > yn)
		cout << xn;
	else
		cout << yn;


	return 0;
}
