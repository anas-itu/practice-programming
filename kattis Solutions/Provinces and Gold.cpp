#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

	int g, s, c, sum;
	cin >> g >> s >> c;
	sum = g * 3 + s * 2 + c * 1;

	if (sum >= 8)
		cout << "Province or Gold";
	else if (sum >= 6 && sum < 8)
		cout << "Duchy or Gold";
	else if (sum == 5)
		cout << "Duchy or Silver";
	else if (sum < 5 && sum >= 3)
		cout << "Estate or Silver";
	else if (sum == 2)
		cout << "Estate or Copper";
	else
		cout << "Copper";

	return 0;
}
