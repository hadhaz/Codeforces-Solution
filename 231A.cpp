#include <iostream>
using namespace std;

int main() {
	int n, max = -1, note;
	cin >> n;
	
	int a[n], b[n], c[n], sum[n];
	for(int i = 0; i < n; i++){
		cin >> a[i] >> b[i] >> c[i];
	}
	
	for(int i = 0; i < n; i++){
		sum[i] = 100*a[i] + 10*b[i] + c[i];
		if(sum[i] > max){
			max = sum[i];
			note = i+1;	
		}
	}
	
	cout << note;
}
