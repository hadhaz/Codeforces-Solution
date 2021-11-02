#include <iostream>
using namespace std;

int main() {
	short int t;
	cin >> t;
	int x[t];
	for(int i = 0; i < t; i++){
		cin >> x[i];
	}
	
	int result[t];
	for(int i = 0; i < t; i++){
		if(x[i] == 9)
			result[i] = 1;
		else if(x[i] < 9)
			result[i] = 0;
		else
			result[i] = x[i]/10;
		cout << result[i] << endl;
	}
	
}