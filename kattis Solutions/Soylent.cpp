#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int num, x, y;
    cin>>num;
    for(int i=0; i<num; ++i){
    	cin>>x;
    	y = x / 400;
    	cout<<(x%400 == 0 ? y:y+1)<<endl;
    }
    return 0;
}
