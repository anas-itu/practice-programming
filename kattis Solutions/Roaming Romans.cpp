#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

	double x, y, z;

	cin >> x;
	z = 1000 * 5280 / (double)4854;
	y = x * z + 0.5;

	cout << int(y);

	return 0;
}

