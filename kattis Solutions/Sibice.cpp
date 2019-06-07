#include <cstdio>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int N,W,H,L;
    cin >> N >> W >> H ;
    for (int i = 0; i < N; ++i)
    {
        cin >> L;
        if (L * L <= W * W + H * H)
            cout << "DA" << endl;
        else
            cout << "NE" << endl;
    }
    return 0;
}
