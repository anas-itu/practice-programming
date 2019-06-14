#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b;
	cin >> a;
	for (int i = 0; i < a; ++i){
		cin >> b;
		if(b == 1)
			cout << 1 << "\n";
		if(b == 2)
			cout << 2 << "\n";
		if(b == 3)
			cout << 6 << "\n";
		if(b == 4)
			cout << 4 << "\n";
		if(b > 4)
			cout << 0 << "\n";
	}
	return 0;
}
