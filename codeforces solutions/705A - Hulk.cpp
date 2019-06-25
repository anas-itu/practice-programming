#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main() {
	int num;
	cin >> num;
	cout << "I hate ";
	for(int i = 2; i <= num; ++i) {
		cout << "that ";
		if(i % 2 != 0)
			cout << "I hate ";
		else
			cout << "I love ";
	}
	cout << "it";
	return 0;
}
