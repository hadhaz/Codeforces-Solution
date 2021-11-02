#include <iostream>
using namespace std;

int main() {
	string str;
	int len, i = 0, count = 0;
	
	getline(cin, str);
	
	len = str.length();
	str.erase(len - 1, 1);
	str.erase(0, 1);
	
	while(i < len-2){
		str.erase(i+1, 2);
		i++;
		len-=2;
	}
	
	len = str.length();
	for(int i = 0; i < len - 1; i++){
		for(int j = i+1; j < len; j++){
			if(str[i] == str[j]){
				str.erase(j, 1);
				len--;
				j--;
			}
		}
	}
	cout << len;
}
