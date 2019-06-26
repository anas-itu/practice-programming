#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int dis;
	cin>>dis;
	int ans = dis / 5;
	cout<<(dis % 5 == 0 ? ans : ans + 1);
	return 0;
}
