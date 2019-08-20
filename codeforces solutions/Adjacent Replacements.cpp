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
	int tm;
	cin >> tm;
	while(tm--)
	{
		int num;
		cin >> num;
		cout << (num % 2 == 0? num - 1 : num) << ' ';
	}
	return 0;
}
