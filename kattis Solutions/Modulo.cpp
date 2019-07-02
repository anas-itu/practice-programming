#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
	int sum = 1;
	vector<int> v;
	for(int i=0; i<10; ++i) {
		int x;
		cin>>x;
		v.push_back(x%42);
	}
	sort(v.begin(),v.end());
	for(int i=1;i<10;++i){
		if(v[i] != v[i-1])
			++sum;
	}
	cout<<sum;
	return 0;
}
