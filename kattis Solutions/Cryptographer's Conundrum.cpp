#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {

	string per = "PER";
	int days = 0;
	string word;
	cin >> word;
	for (int i = 0; i < (int)word.size(); ++i) {
		if (word[i] != per[i % 3])
			++days;
	}
	cout << days << endl;
	return 0;
}
