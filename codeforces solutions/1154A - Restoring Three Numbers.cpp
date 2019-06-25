#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main() {
	int a, b, c, d, max;
	cin >> a >> b >> c >> d;
	max = a;
	if(b > max)max = b;
	if(c > max)max = c;
	if(d > max)max = d;
	if(max == a)
		cout << max-b << " " << max-c << " " << max-d;
	if(max == b)
		cout << max-a << " " << max-c << " " << max-d;
	if(max == c)
		cout << max-a << " " << max-b << " " << max-d;
	if(max == d)
		cout << max-a << " " << max-b << " " << max-c;
	return 0;
}
