#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

	int a, b, c, e, total = 0;
	cin >> a >> b >> c;
	e = a + b;
	while(e >= c) {
		total += e/c;
		e = e/c + e%c;
	}
	cout << total;

	return 0;
}
