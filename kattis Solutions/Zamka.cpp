#include <cstdio>
#include <iostream>
#include <string.h>
#include <cmath>


using namespace std;

int main()
{
    int l, d, x;
    cin >> l >> d >> x;
    int mn = -1, mx;
    for (int i = l; i <= d; ++i)
    {
        int temp = i;
        int n = 0;
        while (temp > 0)
        {
            n += temp % 10;
            temp /= 10;
        }
        if (n == x)
        {
            mx = i;
            if (mn == -1)
            {
                mn = i;
            }
        }
    }
    cout << mn << endl << mx << endl;
    return 0;
}
