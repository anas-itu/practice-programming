#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int x, y;
	cin>>x>>y;
	cout<<(y%2 == 0? "possible" : "impossible");
	return 0;
}
