#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int mat,indexi = 0, indexj = 0;
	for(int i=0; i<5; ++i){
		for(int j=0; j<5; ++j){
			cin>>mat;
			if(mat == 1){
				indexi = i;
				indexj = j;
			}
		}
	}
	cout<<abs(2 - indexi) + abs(2 - indexj);
	return 0;
}
