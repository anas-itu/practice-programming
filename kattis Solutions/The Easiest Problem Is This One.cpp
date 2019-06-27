#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;
const double pi = acos(-1);

int main() {
	int num;
	cin>>num;
	while(num!=0){
		int sum = 0, a = num;
		while(a != 0){
			sum += a%10;
			a /= 10;
		}
		int x = 11, sum1 = 0;
		int y = num*x;
		while(y != 0){
			sum1 += y%10;
			y /= 10;
		}
		while(sum != sum1){
			++x;
			sum1 = 0;
			int y = num*x;
			while(y != 0){
				sum1 += y%10;
				y /= 10;
			}
		}
		cout<<x<<endl;
		cin>>num;
	}
	return 0;
}

