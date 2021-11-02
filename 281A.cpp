#include <iostream>
using namespace std;

int main() {
	string str;
	cin >> str;
	
	if(str[0] > 'Z'){
		str[0] -= 32;
	}
	
	cout << str;
}
