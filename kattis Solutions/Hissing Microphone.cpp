#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	string w;
	cin >> w;
	int hiss = 1;
	for (int i = 0; i < (int)w.size(); ++i){
		if (w[i] == 's' && w[i + 1] == 's')
			hiss = 2;
	}
	if (hiss == 2)
		cout << "hiss\n";
	else
		cout << "no hiss\n";
	return 0;
}
