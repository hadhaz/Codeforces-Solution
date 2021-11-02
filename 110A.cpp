#include <iostream>
using namespace std;

int main() {
	string number; 
	int len, count = 0;
	cin >> number;
	
	len = number.length();
	
	for(int i = 0; i < len; i++){
		if(number[i] == '4' || number[i] == '7'){
			count ++;
		}
	}
	
	if(count == 7 || count == 4){
		cout << "YES";
	}
	else
		cout << "NO";
}
