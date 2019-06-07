#include <cstdio>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int H,M;
    cin >> H >> M;
    if (M < 45)
        cout << (H > 0 ? H - 1 : 23) << " " << (M + 60 - 45);
    else
        cout << H << " " << M - 45;
    return 0;
}
