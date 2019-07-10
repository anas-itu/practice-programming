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
	int x, y;
	cin >> x >> y;

	if(y-x > 1)
		cout << "Dr. Chaz will have " << (y - x) << " pieces of chicken left over!";
	else if(y-x == 1)
		cout << "Dr. Chaz will have " << (y - x) << " piece of chicken left over!";
	else if(x-y > 1)
		cout << "Dr. Chaz needs " << (x - y) << " more pieces of chicken!";
	else if(x-y == 1)
		cout << "Dr. Chaz needs " << (x - y) << " more piece of chicken!";
	return 0;
}
