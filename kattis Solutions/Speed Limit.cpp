#include <cstdio>
#include <iostream>
#include <string.h>
#include <cmath>


using namespace std;

int main()
{
    int n, s, t, a, tot = 0;
    cin >> n;
    while (n != -1){
        a = 0, tot = 0;
        for (int i =0; i < n; ++i){
            cin >> s >> t;
            tot += s * (t - a);
            a = t;
        }
        cout << tot << " miles" << endl;
        cin >> n;
    }
    return 0;
}
