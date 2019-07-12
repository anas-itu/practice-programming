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
	int arr[10][10];
	int n; cin >> n;
	
	for(int i = 0; i < n; i++)arr[i][0] = arr[0][i] = 1;
	
	for(int i = 1; i < n; i++){
		for(int j = 1; j < n; j++){
			arr[i][j] = arr[i][j - 1] + arr[i-1][j];
		}
	}
	
	cout << arr[n - 1][n - 1] << endl;
	return 0;
}
