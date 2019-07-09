#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>
#include <sstream>
#include <vector>
#include <assert.h>
const double pi = acos(-1);
using namespace std;

int main() {
	int n, r;
	cin >> n >> r;

	if (n == r) {
		cout << "too late";
		return 0;
	}
	else {
		int x[r + 1];
		for (int i = 0; i < r; ++i)
			cin >> x[i];
		sort(x, x + r);
		if(x[0] != 1){
			cout << 1;
			return 0;
		}
		else if(x[r-1] != n){
			cout << n;
			return 0;
		}
		for (int i = 0; i < r - 1; ++i) {
			if (x[i + 1] - x[i] > 1) {
				cout << x[i + 1] - 1;
				return 0;
			}

		}

	}
	return 0;
}
