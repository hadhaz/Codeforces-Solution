#include <iostream>
using namespace std;

int main() {
	string s, t;
	int len;
	cin >> s >> t;
	
	len = s.length();
	for(int i = 0; i < (len+1)/2; i++){
		char temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
	
	if(s == t)
		cout << "YES";
	else
		cout << "NO";
}
