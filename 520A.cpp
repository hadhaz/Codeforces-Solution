#include <iostream>
using namespace std;

int main() {
	int n;
	bool found[26] = {false}, allTrue = true;
	string s;
	cin >> n >> s;
	for(int i = 0; i < n; i++){
		found[(s[i] - 'A')%32] = true;
	}
	for(int i = 0; i < 26; i++){
		if(not found[i]){
			allTrue = false;
			break;	
		}
	}
	if(allTrue)
		cout << "YES";
	else
		cout << "NO";
}
