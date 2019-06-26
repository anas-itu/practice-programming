#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int num, SF = 0, FS = 0;
	cin>>num;
	char s[num];
	for(int i=0; i<num; ++i)
		cin>>s[i];
	for(int i=0; i<num-1; ++i){
		if(s[i] == 'S' && s[i+1] == 'F')
			++SF;
		if(s[i] == 'F' && s[i+1] == 'S')
			++FS;
	}
	if(SF > FS)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
