#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

	long long num, x[100000], y, z, a[100000];

	cin >> num;

	for (int i = 0; i < num; ++i) {
		cin >> x[i];
		a[i] = x[i];
	}
	for (int j = 0; j < (num - 1); ++j) {
		if (a[j + 1] < a[j])
			y = a[j + 1];
		else if (a[j] < a[j + 1])
			a[j + 1] = a[j];
	}
	for (int w = 0; w < num; ++w) {
		if (x[w] == y) {
			z = w;
			break;
		}
	}
	cout << z ;


	return 0;
}

