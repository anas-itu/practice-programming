#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, a, b, c;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> a >> b >> c;
		int d = b - c;
		if (d > a)
			cout << "advertise\n";
		if (d == a)
			cout << "does not matter\n";
		if (a > d)
			cout << "do not advertise\n";
	}
	return 0;
}
