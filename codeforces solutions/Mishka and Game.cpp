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
	int n, x, y;	cin >> n;
	int m = 0, c = 0;
	for(int i=0; i<n; ++i){
		cin >> x >> y;
		if(x > y)
			++m;
		else if(y > x)
			++c;
	}
	if(m > c)
		cout << "Mishka\n";
	else if(c > m)
		cout << "Chris\n";
	else
		cout << "Friendship is magic!^^\n";
	return 0;
}
