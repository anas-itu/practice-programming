#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int X,N,P;
    cin >> X >> N;
    int tot = X;
    for (int i = 0; i < N; ++i)
    {
        cin >> P;
        tot += X - P;
    }
    cout << tot << endl;
    return 0;
}
