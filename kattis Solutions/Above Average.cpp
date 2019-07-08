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
	cin >> n;
	for(int i=0; i<n; ++i){
		int x; cin >> x;
		vector<int> v;
		int sum = 0;
		int num = 0;
		double avr;
		for(int j=0; j<x; ++j){
			int y; cin >> y;
			v.push_back(y);
			sum += y;
		}
		avr = sum / x * 1.0;
		for(int j=0; j<x; ++j){
			if(v[j] > avr)
				++num;
		}
		double res;
		res = num * 1.0 / x * 100;
		cout<<fixed<<setprecision(3)<<res<<"%\n";
	}
	return 0;
}
