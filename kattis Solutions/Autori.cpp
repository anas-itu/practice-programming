#include <cstdio>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[101];
    cin >> s;
    cout << s[0];
    for (int i = 0; i < strlen(s); ++i)
    {
        if (s[i] == '-')
            cout << s[i+1];
    }
    return 0;
}
