#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <cstdlib>
const double pi = acos(-1);
using namespace std;



int main(void)
{
	float a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	float x = (a * 1.0 / d), y = (b * 1.0 / e), z = (c * 1.0 / f);
	if (x < y && x < z)
	{
		float ans1 = b - e * x, ans2 = c - f * x;
		cout << 0.000000 << " " << ans1 << " " << ans2;
	}
	else if (y < x && y < z)
	{
		float ans1 = a - d * y, ans2 = c - f * y;
		cout << ans1 << " " << 0.000000 << " " << ans2;
	}
	else if (z < x && z < y)
	{
		float ans1 = a - d * z, ans2 = b - e * z;
		cout << ans1 << " " << ans2 << " " << 0.000000;
	}
	else
	{
		float ans1 = a - d * x, ans2 = b - e * x, ans3 = c - f * x;
		cout << ans1 << " " << ans2 << " " << ans3;
	}
	return 0;
}
