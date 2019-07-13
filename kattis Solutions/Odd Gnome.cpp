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
	int n;	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		int a;	cin >> a;
		vector<int> v;
		int th;
		for(int j = 0; j < a; j++)
		{
			int x;	cin >> x;
			v.push_back(x);
		}
		for(int j = 1; j < a; ++j)
		{
			if(v[j] - v[j - 1] != 1){
				th = j + 1;
				break;
			}
		}
		cout << th << endl;
	}
	return 0;
}



int str2int(string str) {			//function convert form string to integer!!!
	int num = 0;
	int len = str.size();
	for (int i = 0; i < (int) str.size(); ++i) {
		--len;
		int y;
		int x = str[i];
		if(x == 48){y = 0;}
		if(x == 49){y = 1;}
		if(x == 50){y = 2;}
		if(x == 51){y = 3;}
		if(x == 52){y = 4;}
		if(x == 53){y = 5;}
		if(x == 54){y = 6;}
		if(x == 55){y = 7;}
		if(x == 56){y = 8;}
		if(x == 57){y = 9;}
		num += y * pow(10, len);
	}
	return num;
}
