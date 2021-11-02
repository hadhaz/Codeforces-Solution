#include <iostream>
using namespace std;

int main() {
	string str; int len, countLower = 0, countUpper = 0;
	cin >> str;
	len = str.length();
	
	for(int i = 0; i < len; i++){
		if(str[i] >= 'a' && str[i] <= 'z')
			countLower ++;
		else
			countUpper ++;
	}
	
	if(countLower >= countUpper){
		for(int i = 0; i < len; i++){
			if(str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
	}
	else{
		for(int i = 0; i < len; i++){
			if(str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
	}
	
	cout << str;
}
