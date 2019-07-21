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
	int arr[1000];
	for(int i = 0; i < 1000; i++)
	{
		arr[i] = i + 1;
	}
	int i = 499, j = 999, k = 0;
	for(int z = 0; z < 10; z++)
	{
		cout << arr[i] << endl;
		string str;
		cin >> str;
		if(str == "correct")
		{
			break;
		}
		else if(str == "higher")
		{
			k = i + 1;
			i = round((k + j) * 1.0 / 2);
		}
		else if(str == "lower")
		{
			j = i - 1;
			i = round((j + k) * 1.0 / 2);
		}
	}
	return 0;
}
