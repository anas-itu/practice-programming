#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, a;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> a;
		if (a % 2 == 0)
			cout << a <<" is even\n";
		if (a % 2 != 0)
			cout << a << " is odd\n";
	}
	return 0;
}
