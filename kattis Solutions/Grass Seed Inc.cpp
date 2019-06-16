#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {

	int num;
	double tot, cost, l, w, x = 0;

	cin >> cost >> num;

	int i;
	for (i = 0; i < num; ++i){
		cin >> l >> w;
		x += l * w;
	}
	tot = cost * x;
	cout << fixed << setprecision(7) << tot << endl;

	return 0;
}
