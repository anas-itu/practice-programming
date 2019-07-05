#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
	int _th, time, num;
	char str;
	cin >> _th;
	int person = _th, seconds = 0;
	cin >> num;
	for (int i = 0; i < num; ++i) {
		cin >> time >> str;
		seconds += time;
		if (seconds > 210) {
			cout << person;
			break;
		}
		if (str == 'T')
			++person;
		if (person == 9)
			person = 1;
	}
	return 0;
}
