#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main() {
	int a, max = 0;
	cin >> a;
	while(a-100 >= 0) {
		a = a - 100;
		max += 1;
	}
	while(a-20 >= 0) {
		a = a - 20;
		max += 1;
	}
	while(a-10 >= 0) {
		a = a - 10;
		max += 1;
	}
	while(a-5 >= 0) {
		a = a - 5;
		max += 1;
	}
	while(a-1 >= 0) {
		a = a - 1;
		max += 1;
	}
	cout << max;
	return 0;
}
