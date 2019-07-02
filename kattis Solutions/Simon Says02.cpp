#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
	int num;
	const string a = "Simon says";
	cin>>num;
	cin.ignore();
	for(int i=0; i<num; ++i) {
		string s;
		getline(cin,s);
		string ss = s.substr(0,10);
		if(ss.compare(a) == 0){
			cout<<s.substr(11)<<endl;
		}
	}
	return 0;
}
