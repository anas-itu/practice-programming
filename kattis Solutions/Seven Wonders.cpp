#include <cstdio>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[51];
    cin >> s;
    int cntC = 0;
    int cntT = 0;
    int cntG = 0;
    int points = 0;
    for (int i = 0; i < strlen(s); ++i)
    {
        if (s[i] == 'C')
            cntC += 1;
        if (s[i] == 'T')
            cntT += 1;
        if (s[i] == 'G')
            cntG += 1;
    }
    points += cntC * cntC + cntG * cntG + cntT * cntT;
    int mn = cntC;
    if (cntT < mn)
        mn = cntT;
    if (cntG < mn)
        mn = cntG;
    points = points + mn * 7;
    cout << points << endl;
    return 0;
}
