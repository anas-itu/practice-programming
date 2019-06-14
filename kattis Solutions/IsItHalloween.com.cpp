#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int a;
	string b;
	cin >> b >> a;
	if (b == "OCT" && a == 31)
		cout << "yup";
	else if (b == "DEC" && a == 25)
		cout << "yup";
	else
		cout << "nope";
	return 0;
}
