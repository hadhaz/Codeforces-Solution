#include <iostream>
using namespace std;

int maxF(int a, int b){
	if(a >= b)
		return a;
	else
		return b;
}

int main() {
	int n, a[1000], b[1000], sum = 0, max = -1;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> a[i] >> b[i];
	}
	
	for(int i = 0; i < n; i++){
		sum += b[i] - a[i];
		max = maxF(max, sum);
	}
	
	cout << max;
}
