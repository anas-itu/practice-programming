#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n % 2 == 0 && n != 2)
		cout << "YES" << endl;
	if (n % 2 != 0 || n == 2)
		cout << "NO" << endl;
	return 0;
}
