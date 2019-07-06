#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <cstdlib>
using namespace std;

int s(int x) {
	int sum = 0;
	while (x != 0) {
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

int main() {
	int a;
	cin >> a;
	while (s(a) % 4 != 0){
		++a;
	}
	cout << a << endl;
	return 0;
}
