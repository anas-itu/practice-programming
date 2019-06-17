#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

	int p1[3], p2[3], p3, p4;

	int i;
	for (i = 0; i < 3; ++i) {
		cin >> p1[i] >> p2[i];
		if (p1[0] == p1[1])
			p3 = p1[2];
		else if (p1[1] == p1[2])
			p3 = p1[0];
		else if (p1[0] == p1[2])
			p3 = p1[1];
		if (p2[0] == p2[1])
			p4 = p2[2];
		else if (p2[1] == p2[2])
			p4 = p2[0];
		else if (p2[0] == p2[2])
			p4 = p2[1];
	}
	cout << p3 << " " << p4;
	return 0;
}
