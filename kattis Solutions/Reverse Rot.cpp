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
	const string s =
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ_.ABCDEFGHIJKLMNOPQRSTUVWXYZ_.AB";
	int x;
	string ss;
	cin >> x >> ss;
	while (x != 0) {
		vector<string> v;
		string str;
		for (int i = 0; i < (int) ss.length(); ++i) {
			size_t y = s.find(ss[i]);
			str = s[y + x];
			v.push_back(str);
		}
		for (int j = (int) ss.length() - 1; j >= 0; --j) {
			cout << v[j];
		}
		cout << endl;
		cin >> x >> ss;
	}

	return 0;
}
