#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main() {

	int num, val, sum = 0;
	cin >> val;
	num = val;
	while (num != 0){
		sum += num % 10;
		num = num / 10;
	}
	if (val % sum == 0)
		cout << val;

	else{
		while (val % sum != 0){
			val += 1;
			num = val;
			sum = 0;
			while (num != 0){
				sum += num % 10;
				num = num / 10;
			}
		}
		cout << val;
	}

	return 0;
}
