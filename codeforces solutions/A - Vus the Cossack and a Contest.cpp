#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a <= b && a <= c) {
		cout << "Yes";
	} else
		cout << "No";
	return 0;
}
