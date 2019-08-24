#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <cstdlib>
using namespace std;
 
int main(void){
	string str;
	cin >> str;
	for(int i = 0, len = str.size(); i <= len; ++i){
		for(char j = 'a'; j <= 'z'; ++j){
			string str1 = str;
			int check = 0;
			str1.insert(str1.begin() + i, j);
			int len = str1.size();
			int l = len;
			for(int a = 0; a < len / 2; ++a){
				if(str1[a] != str1[l - 1]){
					check = 1;
				}
				--l;
			}
			if(check == 0){
				for(int x = 0, len1 = str1.size(); x < len1; ++x){
					cout << str1[x];
				}
				return 0;
			}
		}
	}
	cout << "NA";
	return 0;
}
