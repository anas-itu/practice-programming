#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, m, i;
	cin >> n >> m;
	if (n > m){
		for(i = m + 1; i <= n + 1; ++i){
			cout << i << "\n";
		}
	}
	if ( m > n){
		for(i = n +1 ; i <= m + 1; ++i){
			cout << i << "\n";
		}
	}
	if (m == n)
		cout << m + 1 << "\n";
	return 0;
}
