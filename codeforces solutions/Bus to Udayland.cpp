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
	int n;
	cin >> n;
	bool cond = false;
	char arr[n][6];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i][0] == 'O' && arr[i][1] == 'O')
		{
			arr[i][0] = '+';
			arr[i][1] = '+';
			cond = true;
			break;
		}
		else if (arr[i][3] == 'O' && arr[i][4] == 'O')
		{
			arr[i][3] = '+';
			arr[i][4] = '+';
			cond = true;
			break;
		}
	}
	if (cond == true)
	{
		cout << "YES\n";
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < 5; j++){
				cout << arr[i][j];
			}
			cout << endl;
		}
	}
	else
	{
		cout << "NO";
	}
	return 0;
}
