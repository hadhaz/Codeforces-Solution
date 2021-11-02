#include <iostream>
using namespace std;

int main() {
	string str;
	int n, t;
	
	cin >> n >> t >> str;
	
	for(int i = 0; i < t; i++){
		for(int j = 0; j < n-1; j++){
			if(str[j] < str[j+1]){
				char temp = str[j];
				str[j] = str[j+1];
				str[j+1] = temp;
				j++;
			}
		}
	}
	
	cout << str;
}
