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
	int n; cin >> n;
	int a; cin >> a;

	for(int i=0; i<n-1; ++i){
		int x; cin >> x;

		for(int j=x; j>=1; --j){

			if(a%j == 0 && x%j == 0){
				cout << a/j << '/' << x/j << endl;
				break;
			}
		}
	}

	return 0;
}
