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
	int a, b, c, d;
	cin>>a>>b>>c;
	d = (b+c)/a;
	if(d%2 == 0){cout<<"paul";}
	else{cout<<"opponent";}
	return 0;
}
