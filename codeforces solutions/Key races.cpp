
 #include <iostream>
 
using namespace std;
 
int main(void){
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int first, second;
	first = a * b + d * 2;
	second = a * c + e * 2;
	if(first < second)
		cout << "First";
	else if(second < first)
		cout << "Second";
	else
		cout << "Friendship";
	return 0;
}
