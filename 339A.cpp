#include <iostream>
using namespace std;

int main() {
	string s; int size;
	cin >> s;
	
	size = s.length();
	
	if(size > 1)
	for(int i = 0; i < size-2; i+=2)
	for(int j = 0; j < size - 2; j+=2){
		if(s.substr(j, 1) > s.substr(j+2, 1)){
			char temp = s[j];
			s[j] = s[j+2];
			s[j+2] = temp;
		}
			
	}
	cout << s;
}
