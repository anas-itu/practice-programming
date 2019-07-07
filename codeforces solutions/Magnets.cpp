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
	cin>>n;
	int d=1;
	vector<int> v;


	for(int i=0; i<n; ++i){
			int x; cin >> x;
			v.push_back(x);
	}

	for(int i=1; i<n; ++i){
			if(v[i-1] != v[i])
				++d;
	}

	cout << d;
	return 0;
}
