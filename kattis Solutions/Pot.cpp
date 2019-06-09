#include <cstdio>
#include <iostream>
#include <string.h>
#include <cmath>


using namespace std;

int main()
{
    int n, p, tot = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> p;
        int x, y;
        y = p % 10;
        x = p / 10;
        int pw = 1;
        for (int j = 1; j <= y; ++j)
        {
            pw = pw * x;
        }
        tot += pw;
    }
    cout << tot << endl;
    return 0;
}
