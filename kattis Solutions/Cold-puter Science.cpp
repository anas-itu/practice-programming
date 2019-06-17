#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

	int num, x, tot = 0;
	cin >> num;

	int i;
	for ( i = 0; i < num; ++i){
		cin >> x;
		if (x < 0)
			tot += 1;
	}

	cout << tot;

	return 0;
}
