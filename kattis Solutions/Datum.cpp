#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

	int day, month;

	cin >> day >> month;

	if (month == 2) {
		day = day + 31;
	} else if (month == 3) {
		day = day + 59;
	} else if (month == 4) {
		day = day + 90;
	} else if (month == 5) {
		day = day + 120;
	} else if (month == 6) {
		day = day + 151;
	} else if (month == 7) {
		day = day + 181;
	} else if (month == 8) {
		day = day + 212;
	} else if (month == 9) {
		day = day + 243;
	} else if (month == 10) {
		day = day + 273;
	} else if (month == 11) {
		day = day + 304;
	} else if (month == 12) {
		day = day + 334;
	}

	while (day > 7) {
		day = day - 7;
	}

	if (day == 1)
		cout << "Thursday";
	else if (day == 2)
		cout << "Friday";
	else if (day == 3)
		cout << "Saturday";
	else if (day == 4)
		cout << "Sunday";
	else if (day == 5)
		cout << "Monday";
	else if (day == 6)
		cout << "Tuesday";
	else if (day == 7)
		cout << "Wednesday";

	return 0;
}
