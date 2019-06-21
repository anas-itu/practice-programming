#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

	int num;
	double x[100000], y[100000];
	double area = 0;

	cin >> num;

	for (int i = 0; i < num; ++i) {
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < num - 1; ++i) {
		area += ((y[i] + y[i + 1]) / 2) * (x[i + 1] - x[i]) / 1000;
	}
	cout << fixed << setprecision(5) << area;

	return 0;
}

