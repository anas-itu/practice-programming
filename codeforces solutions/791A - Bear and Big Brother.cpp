#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main() {
	int a, b, x = 0;
	cin>>a>>b;
	while(a <= b){
		++x;
		a = a*3;
		b = b*2;

	}
	cout<<x;
	return 0;
}
