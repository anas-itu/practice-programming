#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main() {
	int x, y, a;
	cin >> x >> y;
	while (x != 0 && y != 0) {
		int z;
		if(x%y == 0)
			cout<<x/y<<" "<<0<<" / "<<y<<endl;
		else
		{
			a = x/y; z = x - a * y;
			cout<<a<<" "<<z<<" / "<<y<<endl;
		}


		cin>>x>>y;
	}
	return 0;
}
