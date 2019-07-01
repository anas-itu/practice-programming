#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
	vector<pair<int, string> > v;
	int num;
	cin >> num;
	for (int i = 0; i < num; ++i) {
		string one, two;
		cin >> one >> two;
		if (isalpha(one[0])) {
			v.push_back(make_pair((stoi(two) * 2), one));
		} else {
			v.push_back(make_pair(stoi(one), two));
		}
		sort(v.begin(), v.end());

	}
	for (int i = 0; i < num; ++i) {
		cout << v[i].second << endl;
	}
	return 0;
}
