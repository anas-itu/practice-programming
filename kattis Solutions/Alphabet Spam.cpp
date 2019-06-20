#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {

	int a = 0, b = 0, c = 0, d = 0;
	double ra, rb, rc, rd, tot;
	string x;

	cin >> x;

	for (int i = 0; i < (int)x.size(); ++i) {
		if (x[i] == '_')
			a += 1;
		else if (x[i]=='a' || x[i]=='b' || x[i]=='c' || x[i]=='d' || x[i]=='e' || x[i]=='f' || x[i]=='g' || x[i]=='h' || x[i]=='i' || x[i]=='j' || x[i]=='k' || x[i]=='l' || x[i]=='m' || x[i]=='n' || x[i]=='o' || x[i]=='p' || x[i]=='q' || x[i]=='r' || x[i]=='s' || x[i]=='t' || x[i]=='u' || x[i]=='v' || x[i]=='w' || x[i]=='x' || x[i]=='y' || x[i]=='z')
			b += 1;
		else if (x[i]=='A' || x[i]=='B' || x[i]=='C' || x[i]=='D' || x[i]=='E' || x[i]=='F' || x[i]=='G' || x[i]=='H' || x[i]=='I' || x[i]=='J' || x[i]=='K' || x[i]=='L' || x[i]=='M' || x[i]=='N' || x[i]=='O' || x[i]=='P' || x[i]=='Q' || x[i]=='R' || x[i]=='S' || x[i]=='T' || x[i]=='U' || x[i]=='V' || x[i]=='W' || x[i]=='X' || x[i]=='Y' || x[i]=='Z')
			c += 1;
		else
			d += 1;
	}
	tot = a + b + c + d;
	ra = a/tot;
	rb = b/tot;
	rc = c/tot;
	rd = d/tot;
	cout << ra << endl << rb << endl << rc << endl << rd;
	return 0;
}
