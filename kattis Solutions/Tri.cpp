#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

	int x, y, z;
	cin >> x >> y >> z;

	if (x + y == z)
		cout << x << '+' << y << '=' << z;
	else if (x - y == z)
		cout << x << '-' << y << '=' << z;
	else if (x * y == z)
		cout << x << '*' << y << '=' << z;
	else if (x / y == z)
		cout << x << '/' << y << '=' << z;
	else if (x == y + z)
		cout << x << '=' << y << '+' << z;
	else if (x == y - z)
		cout << x << '=' << y << '-' << z;
	else if (x == y * z)
		cout << x << '=' << y << '*' << z;
	else if (x == y / z)
		cout << x << '=' << y << '/' << z;


	return 0;
}

