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
	int sz, cnt = 0;
	string str;
	cin >> sz >> str;
	vector <int>ans;
	for(int i = 0; i < sz; i++)
	{
		if(str[i] == 'B')
			cnt++;
		else
		{
			if(cnt)
				ans.push_back(cnt);
			cnt = 0;
		}
	}
	if(cnt)
		ans.push_back(cnt);
	cout << ans.size() << endl;
	for(int i = 0, len = ans.size(); i < len; i++)
	{
		cout << ans[i] << ' ';
	}
	return 0;
}
