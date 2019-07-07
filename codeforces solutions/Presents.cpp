#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
	int n;
	int a[101];
	cin >> n;

	for(int i=1; i<=n; ++i) {

			int x;  cin >> x;
			a[x] = i;

	}

	for(int i=1; i<=n; ++i) {

			cout << a[i] << " ";

	}
	return 0;
}
