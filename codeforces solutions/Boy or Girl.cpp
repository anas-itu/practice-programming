#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main(void){
	string str;
	cin >> str;
	char c[150];
	c[0] = str[0];
	int word = 1;
	for (int i = 1, len = str.size(); i < len; ++i){
		int check = 0;
		for (int j = 0; j < word; ++j){
			if (str[i] == c[j])
				check = 1;
		}
		if (check == 0){
			c[word] = str[i];
			word++;
		}
	}
	if(word % 2 == 0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";
	return 0;
}
