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
	vector<int> v;
	for (int i = 0; i < 5; ++i)
	{
		int x; cin >> x;
		v.push_back(x);
	}
	bool arrange = false;
	while (!arrange)
	{	
		for (int i = 0; i<4; i++){
			if (v[i] > v[i + 1]){
				swap(v[i], v[i + 1]);
				for (int i = 0; i < 5; ++i)
				{
					cout << v[i] << " ";
				}
				cout << endl;
			}
		}
 
		if (v[0] == 1 && v[1] == 2 && v[2] == 3 && v[3] == 4 && v[4] == 5)
		{
			arrange = true;
		}
	}
 
	return 0;
}
