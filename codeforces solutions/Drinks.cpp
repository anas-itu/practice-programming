#include <iostream>
using namespace std;
 
int main() {
	int n, tot = 0;
	cin >> n;
	for(int i=0; i<n; ++i){
		int x; cin >> x;
		tot += x;
	}
	double org;
	org = tot * 1.0 / (n * 100) * 100;
	cout << org << endl;
	return 0;
}
