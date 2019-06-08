#include <cstdio>
#include <iostream>
#include <string.h>


using namespace std;

int main()
{
    int N;
    double q,y;
    double QALY = 0;
    cin >> N;
    for(int i = 0; i < N; ++i)
    {
        cin >> q >> y;
        QALY += (q*y);
    }
    cout << QALY;   // or printf("%.3f\n" , QALY);
    return 0;
}
