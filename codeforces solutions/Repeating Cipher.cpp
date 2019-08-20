#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <cstdlib>
const double pi = acos(-1);
using namespace std;



int main() {
	int n;
	string str;
	cin >> n >> str;
	for(int i = 0, j = 1; i < n; i += j, j++)
	{
		cout << str[i];
	}
	return 0;
}
