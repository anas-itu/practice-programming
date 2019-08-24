#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <cstdlib>
using namespace std;

int main(void){
	int n;
	cin >> n;
	int c[110];
	for(int i = 0; i < n; ++i)
		cin >> c[i];
	int tot = 0;
	vector<int> v;
	for(int i = 0; i < n; ++i){
		vector<int> v1;
		int c1[110];
		for(int a = 0; a < n; ++a)
			c1[a] = c[a];
		for(int j = i; j < n; ++j){
			if(c1[j] == 1)
				c1[j] = 0;
			else
				c1[j] = 1;
			for(int k = 0; k < n; ++k){
				if(c1[k] == 1)
					tot++;
			}
			v1.push_back(tot);
			tot = 0;
		}
		sort(v1.begin(), v1.end());
		v.push_back(v1.back());
	}
	sort(v.begin(), v.end());
	cout << v.back();
	return 0;
}
