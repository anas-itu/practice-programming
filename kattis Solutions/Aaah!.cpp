#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
	string x, y;
	cin>>x>>y;
	cout<<((int)x.size()>=(int)y.size()? "go":"no");
    return 0;
}
