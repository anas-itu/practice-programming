#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <cstdlib>
const double pi = acos(-1);
using namespace std;



int main(void)
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	string str;
	cin >> str;
	int tot = 0;
	for(int i = 0, n = str.size(); i < n; i++)
	{
		if(str[i] - '0' == 1)
			tot += a;
		else if(str[i] - '0' == 2)
			tot += b;
		else if(str[i] - '0' == 3)
			tot += c;
		else if(str[i] - '0' == 4)
			tot += d;
	}
	cout << tot;
	return 0;
}
