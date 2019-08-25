#include <iostream>
using namespace std;
 
int main(void){
	int n;
	cin >> n;
	int c[10];
	int check = 0, ans = 0;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < 3; ++j)
			cin >> c[j];
		for(int j = 0; j < 3; ++j){
			if(c[j] == 1)
				check++;
		}
		if(check > 1)
			ans++;
		check = 0;
	}
	cout << ans;
	return 0;
}
