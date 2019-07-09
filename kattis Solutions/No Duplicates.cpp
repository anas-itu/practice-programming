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
	string str;
	vector<string> v;
	while(cin >> str){
		v.push_back(str);
	}
	sort(v.begin(), v.end());
	bool dup = false;
	for(int i=1; i<(int)v.size(); ++i){
		if(v[i] == v[i-1])
			dup = true;
	}
	if(dup == false)
		cout << "yes\n";
	else
		cout << "no\n";
	return 0;
}
