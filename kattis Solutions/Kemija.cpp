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
	string s;
	getline(cin,s);
	cout<<s[0];
	int len = s.length();
	for(int i=1; i<len; ++i){
		if((s[i-1]=='a'||s[i-1]=='e'||s[i-1]=='i'||s[i-1]=='o'||s[i-1]=='u')&&s[i]=='p')
			i = i+2;
		cout<<s[i];

	}
	return 0;
}
