#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {

	int x, y, n;
	cin >> x >> y >> n;

	int i;
	for (i = 1; i <= n; ++i){
		if (i % x == 0 && i % y == 0)
			cout << "FizzBuzz\n";
		else if (i % x == 0 && i % y != 0)
			cout << "Fizz\n";
		else if (i % y == 0 && i % x != 0)
			cout << "Buzz\n";
		else
			cout << i << endl;
	}
	return 0;
}
