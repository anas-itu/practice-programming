#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main() {
	string word;
	cin >> word;
	int n = 0, e = 0, t = 0, I = 0, min;
	for(int i = 0; i < (int)word.size(); ++i) {
		if(word[i] == 'n')
			++n;
		else if(word[i] == 'e')
			++e;
		else if(word[i] == 't')
			++t;
		else if(word[i] == 'i')
			++I;
	}
	n = (n-1)/2; e = e/3;
	min = e;
	if(n < min)
		min = n;
	if(t < min)
		min = t;
	if(I < min)
		min = I;
	cout << min <<"\n";
	return 0;
}
