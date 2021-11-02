#include <iostream>
using namespace std;

int main() {
	int t, a[10000], b[10000], count[10000] = {0};
	cin >> t;
	
	for(int i = 0; i < t; i++)
		cin >> a[i] >> b[i];
		
	for(int i = 0; i < t; i++){
		if(a[i]%b[i] != 0)
			count[i] = b[i] - a[i]%b[i];
		else
			count[i] = 0;
	}
	
	for(int i = 0; i < t; i++){
		cout << count[i];
		if(i != t-1)
			cout << endl;
	}	
}

