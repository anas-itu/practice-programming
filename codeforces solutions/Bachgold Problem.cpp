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
	int num;
	cin >> num;
	int x = num / 2;
	if(num % 2 == 0)
	{
		printf("%i\n", x);
		for(int i = 0; i < x; i++)
		{
			printf("2 ");
		}
		printf("\n");
	}
	else
	{
		printf("%i\n", x);
		for(int i = 0; i < x - 1; i++)
		{
			printf("2 ");
		}
		printf("3\n");
	}
	return 0;
}
