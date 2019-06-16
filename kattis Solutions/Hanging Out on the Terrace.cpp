#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;


int main() {

	int sf, num, a[101], tot = 0, grp = 0; // safety , number of groups , total and not allowed groups
	string word;

	cin >> sf >> num;

	int i;
	for (i = 0; i < num; ++i){

		cin >> word >> a[i];

		if (word == "enter") {
			if (a[i] + tot <= sf)
				tot += a[i];
			else
				grp++;
		}
		if (word == "leave")
			tot = tot - a[i];
	}

	cout << grp;

	return 0;
}
