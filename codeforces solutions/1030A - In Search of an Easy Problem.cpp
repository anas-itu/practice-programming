#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main() {
	int num, x, tot = 0;
	cin >> num;
	for(int i = 0; i < num; ++i) {
		cin >> x;
		tot += x;
	}
	if(tot == 0)cout<<"EASY";
	else cout<<"HARD";
	return 0;
}
