#include <cstdio>
#include <iostream>
#include <string.h>
#include <cmath>


using namespace std;

int main()
{
    const double pi = acos(-1);
    int n;
    double v0, th, x, y, h1, h2, t, a;
    cin >> n;
    const double g = 9.81;
    for (int i = 0; i < n; ++i){
        cin >> v0 >> th >> x >> h1 >> h2;
        a = th * (pi / 180);
        t = x / (v0 * cos(a));
        y = v0 * t * sin(a) - 0.5 * g * t * t;
        if (y > (h1 + 1) && y < (h2-1))
            cout << "Safe" << endl;
        else
            cout << "Not Safe" << endl;
    }
    return 0;
}
