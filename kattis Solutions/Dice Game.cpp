#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <cstdlib>
const double pi = acos(-1);
using namespace std;



int main() {
	int a, b, c, d, e, f, g, h, E, G;
	cin >> a >> b >> c >> d >> e >> f >> g >> h;
	G = a + b + c + d;	 	  E = e + f + g + h;
	if(G > E){cout << "Gunnar";}
	else if(E > G){cout << "Emma";}
	else{cout << "Tie";}
	return 0;
}
