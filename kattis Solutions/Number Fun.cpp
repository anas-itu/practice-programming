#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main() {

	int n, a, b, c;
	cin >> n;

	int i;
	for (i = 0; i < n; ++i){
		cin >> a >> b >> c;
		if (a + b == c || a - b == c || b - a == c || a * b == c)
			cout << "Possible\n";
		else if (a / b == c && a % b == 0)
			cout << "Possible\n";
		else if (b / a == c && b % a == 0)
			cout << "Possible\n";
		else
			cout << "Impossible\n";
	}

	return 0;

}
