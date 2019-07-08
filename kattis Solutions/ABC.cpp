#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
	vector<int> v;
	for(int i=0; i<3; ++i){
		int x;	cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	string str;
	cin >> str;
	if(str[0] == 'A' && str[1] == 'B' && str[2] == 'C')
		cout << v[0] << " " << v[1] << " " << v[2];
	else if(str[0] == 'A' && str[1] == 'C' && str[2] == 'B')
		cout << v[0] << " " << v[2] << " " << v[1];
	else if(str[0] == 'B' && str[1] == 'A' && str[2] == 'C')
		cout << v[1] << " " << v[0] << " " << v[2];
	else if(str[0] == 'B' && str[1] == 'C' && str[2] == 'A')
		cout << v[1] << " " << v[2] << " " << v[0];
	else if(str[0] == 'C' && str[1] == 'A' && str[2] == 'B')
		cout << v[2] << " " << v[0] << " " << v[1];
	else if(str[0] == 'C' && str[1] == 'B' && str[2] == 'A')
		cout << v[2] << " " << v[1] << " " << v[0];
	return 0;
}
