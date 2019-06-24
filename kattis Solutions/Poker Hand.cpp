#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

	string a, b, c, d, e;
	int st1 = 1, st2 = 1, st3 = 1, st4 = 1;
	cin >> a >> b >> c >> d >> e;

	if(a[0] == b[0]){st1 += 1;}
	if(a[0] == c[0]){st1 += 1;}
	if(a[0] == d[0]){st1 += 1;}
	if(a[0] == e[0]){st1 += 1;}
	if(b[0] == a[0]){st2 += 1;}
	if(b[0] == c[0]){st2 += 1;}
	if(b[0] == d[0]){st2 += 1;}
	if(b[0] == e[0]){st2 += 1;}
	if(c[0] == a[0]){st3 += 1;}
	if(c[0] == b[0]){st3 += 1;}
	if(c[0] == d[0]){st3 += 1;}
	if(c[0] == e[0]){st3 += 1;}
	if(d[0] == a[0]){st4 += 1;}
	if(d[0] == b[0]){st4 += 1;}
	if(d[0] == c[0]){st4 += 1;}
	if(d[0] == e[0]){st4 += 1;}
	int max = st1;
	if(st2 > st1){max = st2;}
	if(st3 > st2){max = st3;}
	if(st4 > st3){max = st4;}
	cout << max;
	return 0;
}
