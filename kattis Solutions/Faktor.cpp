#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int A,I,T;
    cin >> A >> I;
    for (int i = 1; i <= 10000; ++i)
    {
        int res = i / A;
        if (i % A != 0)
            res += 1;
        if (res == I)
        {
            T = i;
            break;
        }
    }
    cout << T << endl;
    return 0;
}
