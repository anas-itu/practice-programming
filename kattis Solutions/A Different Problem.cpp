#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <cstdlib>
const double pi = acos(-1);
using namespace std;

int main() {
	long long x, y;
	while(cin>>x>>y){
		long long ans;
		ans = abs(x-y);
		cout << ans << endl;
	}

	return 0;
}
