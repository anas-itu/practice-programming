#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b;
	double c, pi, len;
	cin >> a >> b;
	pi = acos(-1);
	c = b * (pi/180);
	len = a / sin(c);
	cout << ceil(len) <<endl;
	return 0;
}
