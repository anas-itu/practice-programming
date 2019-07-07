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
	int d=0, a=0;

	for(int i=0; i<n; ++i){
			char s; cin>>s;
			if(s == 'D')
				++d;
			else
				++a;
	}
	if(a!=d)
		cout<<(a>d? "Anton":"Danik");
	else
		cout<<"Friendship";
	return 0;
}
