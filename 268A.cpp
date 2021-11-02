#include <iostream>
using namespace std;

int main() {
	short int n, h[200], count = 0;
	cin >> n;
	for(int i = 0; i < 2*n; i+=2){
		cin >> h[i] >> h[i+1];
	}
	for(int i = 1; i < n; i+=2){
		if(h[i] == h[i+1])
			count ++;
	}
	if(h[0] == h[n-1])
		count ++;
	
	cout << count;
}
