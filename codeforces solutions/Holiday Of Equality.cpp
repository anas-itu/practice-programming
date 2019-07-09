#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>
#include <sstream>
#include <vector>
#include <assert.h>
const double pi = acos(-1);
using namespace std;

int main() {
	int n;	cin >> n;
	int arr[n];
	for(int i = 0; i < n; ++i)
		cin >> arr[i];
	sort(arr, arr+n);
	int sum = 0;
	for(int i=0; i<n-1; ++i){
		sum += arr[n-1] - arr[i];
	}
	cout << sum;
	return 0;
}
