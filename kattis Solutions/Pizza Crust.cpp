#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>
#include <sstream>
#include <vector>
const double pi = acos(-1);
using namespace std;

int main() {
	double x, y;
	double tot;
	cin >> x >> y;
	tot = (((x - y) * (x - y)) / (x * x)) * 100;
	cout << fixed << setprecision(6) << tot;
	return 0;
}
