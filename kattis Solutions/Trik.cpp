#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;


int main() {

	string wo;
	cin >> wo;
	char a = 'A', b = 'B', c = 'C';
	int plc = 1;

	int i;
	for (i = 0; i < (int)wo.size(); ++i){

		if (wo[i] == a){
			if (plc == 1)
				plc = 2;
			else if (plc == 2)
				plc = 1;
		}

		if (wo[i] == b){
			if (plc == 2)
				plc = 3;
			else if (plc == 3)
				plc = 2;
		}

		if (wo[i] == c){
			if (plc == 1)
				plc = 3;
			else if (plc == 3)
				plc = 1;
		}

	}

	cout << plc;

	return 0;
}
