#include <cstdio>
#include <iostream>
#include <string.h>
#include <cmath>


using namespace std;

int main()
{
    int n, num, po;
    cin >> n;
    num = sqrt(pow(4, n)) + 1;
    po = num * num;
    cout << po << endl;
    return 0;
}
