#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int num, k = 0;
	string s[401];
	cin>>num;
	for(int i=0; i<2*num; i=i+2){
		cin>>s[i]>>s[i+1];
		int x = 0;
		for(int j=0; j<i; j=j+2){
			if(s[j] == s[i])
				x = 1;
		}
		if(x == 0){
			cout<<s[i]<<" "<<s[i+1]<<endl;
			++k;
		}
		if(k == 12) break;
	}
	return 0;
}
