#include <iostream>
using namespace std;

int main() {
	int t, n[10000];
	cin >> t;
	
	for(int i = 0; i < t; i++){
		cin >> n[i];
	}
	
	for(int i = 0; i < t; i++){
		if(n[i]%2==0)
			n[i] = n[i]/2 - 1;
		else
			n[i] = n[i]/2;
	}
	
	for(int i = 0; i < t; i++){
		cout << n[i] << endl;
	}
}
