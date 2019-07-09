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
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	double x;
	x = (a+b+c+d) * 1.0 / 2;
	double ans;
	ans = pow(((x-a)*(x-b)*(x-c)*(x-d)),1.0/2.0);
	cout << fixed << setprecision(6) << ans << endl;
	return 0;
}
