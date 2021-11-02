#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	string str[n];
	for(int i = 0; i < n; i++){
		cin >> str[i];
	}
	
	for(int i = 0; i < n; i++){
		if(str[i].length() <= 10)
			cout << str[i] << endl;
		else{
			cout << str[i].substr(0, 1) << str[i].length() - 2 << str[i].substr(str[i].length()-1);
			cout << endl;
		}
	}
}
