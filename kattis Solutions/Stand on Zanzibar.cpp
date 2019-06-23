#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

	int a, b, c, total;

	cin >> c;

	for(int i = 0; i < c; i++) {
		total = 0;
		cin >> a;
		while(cin >> b, b != 0) {
			if(b - 2*a > 0)
				total += b - 2*a;
			a = b;
		}
		cout << total << endl;
	}
	return 0;
}
