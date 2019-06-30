#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
//#include <bits/stdc++.h>
//#include <sstream>
#include <vector>
using namespace std;
const double pi = acos(-1);

int main() {
	int num, a=1, b=0, sum;
	cin>>num;
	for(int i=1; i<=num; ++i) {
		sum = a+b;
		a = b;
		b = sum;
	}
	cout<<a<<" "<<b;
	return 0;
}
