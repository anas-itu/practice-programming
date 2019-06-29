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
	int num, x;
	cin >> num;
	for (int i = 0; i < num; ++i) {
		cin >> x;
		int park = 0;
		vector<int> v;
		for (int j = 0; j < x; ++j) {
			int y;
			cin >> y;
			v.push_back(y);
		}
		sort(v.begin(), v.end());
		for (int z=1; z<x; ++z){
			park += (v[z] - v[z-1]);
		}
		cout << park * 2 << endl;
	}
	return 0;
}
