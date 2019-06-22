#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

	int num;
	double t, x, y, ou1, ou2, ou3;

	cin >> num;

	for(int i = 0; i < num; ++i) {
		cin >> x >> y;
		t = y / (x - 1);
		ou1 = 60 / t;
		ou2 = 60 * x / y;
		ou3 = ou2 + (ou2 - ou1);
		cout << fixed << setprecision(4) << ou1 << " ";
		cout << fixed << setprecision(4) << ou2 << " ";
		cout << fixed << setprecision(4) << ou3 << endl;
	}

	return 0;
}

