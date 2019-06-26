#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int emp,x,ways=0;
	cin>>emp;
	for(int i=1; i<emp; ++i){
		x = emp - i;
		if(x%i == 0)
			++ways;
	}
	cout<<ways;

	return 0;
}
