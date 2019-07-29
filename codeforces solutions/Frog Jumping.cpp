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
	int num;
	cin >> num;
	for(int i = 0; i < num; i++)
	{
		long long a, b, k;
		cin >> a >> b >> k;
		long long position = 0;
		if(k % 2 == 0)
		{
			position = a * (k/2) - b * (k/2);
		}
		else
		{
			position = a * (k/2 + 1) - b * (k/2);
		}
		cout << position << endl;
	}
	return 0;
}
