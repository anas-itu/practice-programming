#include <iostream>
using namespace std;
 
int main() {
	int n, x, width = 0;
	cin >> n >> x;
	for(int i=0; i<n; ++i){
		int y; cin >> y;
		if(y <= x)
			++width;
		else
			width += 2;
	}
	cout << width << endl;
	return 0;
}
