#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

	int num, a;
	double x = 0, y = 0, res;

	cin >> num;

	int i;
	for ( i = 0; i < num; ++i){
		cin >> a;
		if(a >= 0){
			x += a;
			y += 1;
		}
	}
	res = x / y;

	cout << fixed << setprecision(6) << res;

	return 0;
}
