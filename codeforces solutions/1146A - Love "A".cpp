#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int atot = 0;
	string s;
	cin>>s;
	for(int i=0; i<(int)s.size(); ++i)
		atot += (s[i] == 'a');
	cout<<(atot > (int)s.size() / 2 ? (int)s.size() : atot * 2 - 1);
	return 0;
}
