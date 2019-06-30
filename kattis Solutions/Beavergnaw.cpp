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
	double a, b;
	double vtot, vcyl, x, y, d;
	cin >> a >> b;
	while (a != b && b != 0) {
		vtot = pi * (a*a / 4) * a;
		x = b / 2.;
		vcyl = vtot - (b + x);
		y = vcyl * 4 / pi;
		d = pow(y , 1. / 3.);
		cout <<fixed<<setprecision(9)<< d <<endl;
		cin >> a >> b;
	}
	return 0;
}
