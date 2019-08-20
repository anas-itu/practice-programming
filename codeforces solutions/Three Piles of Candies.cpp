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
	int num;
	cin >> num;
	while(num--)
	{
		long long a, b, c;
		cin >> a >> b >> c;
		long long tot; // the total of the candies
		tot = a + b + c;
		long long ans; // the number for the candies with Alice
		ans = tot / 2;
		cout << ans << endl;
	}
	return 0;
}
