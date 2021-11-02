	#include <iostream>
	using namespace std;
	
	int main() {
		int n, count = 0; string str[150];
		cin >> n;
		
		for(int i = 0; i < n; i++){
			cin >> str[i];
		}
		
		for(int i = 0; i < n; i++){
			if(str[i].substr(1, 1) == "+")
				count += 1;
			else
				count -= 1;
		}
		
		cout << count;
	}
