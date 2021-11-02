#include <iostream>
using namespace std;

int main() {
	string str; int count = 0;
	cin >> str;
	
	for(int i = 0; i < str.length()-1; i++){
		for(int j = i+1; j < str.length(); j++){
			if(str[i] == str[j]){
				str[j] = '*';
				count ++;
			}
		}
	}
	
	if((str.length()-count)%2==0){
		cout << "CHAT WITH HER!";
	}
	else{
		cout << "IGNORE HIM!";
	}
}
