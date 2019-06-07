#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n;
    char B;
    cin >> n >> B;
    char no, su;
    int ans = 0;
    for(int i = 0; i < 4*n; ++i)
    {
        cin >> no >> su;
        if(su == B)
        {
            switch(no)
            {
            case 'A':
                ans += 11;
                break;
            case 'K':
                ans += 4;
                break;
            case 'Q':
                ans += 3;
                break;
            case 'J':
                ans += 20;
                break;
            case 'T':
                ans += 10;
                break;
            case '9':
                ans += 14;
                break;
            case '8':
                ans += 0;
                break;
            case '7':
                ans += 0;
                break;
            }
        }
        else
        {
            switch(no)
            {
            case 'A':
                ans += 11;
                break;
            case 'K':
                ans += 4;
                break;
            case 'Q':
                ans += 3;
                break;
            case 'J':
                ans += 2;
                break;
            case 'T':
                ans += 10;
                break;
            case '9':
                ans += 0;
                break;
            case '8':
                ans += 0;
                break;
            case '7':
                ans += 0;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
