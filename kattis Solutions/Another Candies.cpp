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
    int n;  cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x; int candy = 0;
        for(int j = 0; j < x; j++){
            long long y; cin >> y;
            candy += y%x;
        }
        cout << (candy % x == 0? "YES":"NO") << endl;
    }
    return 0;
}
