#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c, d, f, sum[5] = { 0 }, mx = 0;
	for (int i = 0; i < 5; ++i) {
		cin >> a >> b >> c >> d;
		sum[i] = a + b + c + d;
		if (sum[i] > mx)
			mx = sum[i], f = i + 1;
	}
	cout << f << " " << mx << endl;
	return 0;
}
