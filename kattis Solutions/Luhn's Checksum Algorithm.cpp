#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <cstdlib>
const double pi = acos(-1);
using namespace std;
int str2int(string str);



int main() {
	int n;
	cin >> n;
	for(int j = 0; j < n; j++)
	{
		string num;
		cin >> num;
		vector<int> v;
		for(int i = 0; i < (int)num.size(); i++)
		{
			char a = num[i];
			int x = a - '0';
			v.insert(v.begin(), x);
		}
		int sum = 0;
		for (int i = 0; i < (int)v.size(); i++)
		{

			if(i % 2 != 0)
			{
				v[i] *= 2;
				if(v[i] >= 10)
				{
					v[i] = (v[i] % 10) + (v[i] / 10);
				}
			}
			sum += v[i];
		}
		if(sum % 10 == 0)
		{
			cout << "PASS\n";
		}
		else
		{
			cout << "FAIL\n";
		}
	}
	return 0;
}
