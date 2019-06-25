#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main() {
	int num, sum = 0;
	cin >> num;
	string s;
	for(int i = 0; i < num; ++i) {
		cin >> s;
		if(s == "Tetrahedron")
			sum += 4;
		if(s == "Cube")
			sum+= 6;
		if(s == "Octahedron")
			sum += 8;
		if(s == "Dodecahedron")
			sum += 12;
		if(s == "Icosahedron")
			sum += 20;
	}
	cout << sum;
	return 0;
}
