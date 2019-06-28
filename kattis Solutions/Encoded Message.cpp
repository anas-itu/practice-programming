#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;
const double pi = acos(-1);

int main() {
	int num;
	string s;
	cin>>num;
	for(int i=0;i<num;++i){
		cin>>s;
		int len = s.length();
		int z =sqrt(len)-1, x=sqrt(len);
		while(z >= 0){
			for(int j=z; j<len; j=j+x){
				cout<<s[j];
			}
			--z;
		}
		cout<<endl;
	}
	return 0;
}
