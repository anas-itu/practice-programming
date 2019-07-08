#include <iostream>
using namespace std;
 
int main() {
	int x, y;
	cin >> x >> y;
	if(x > y)
		cout << y << " " << (x-y) / 2 << endl;
	else if(x < y)
		cout << x << " " << (y-x) / 2 << endl;
	else
		cout << x << " " << 0 << endl;
	return 0;
}
