#include <iostream>
using namespace std;

int main() {
	int n, a[1000], max, min, count = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	max = a[0], min = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] > max){
			max = a[i];
			count ++;
		}
		else if(a[i] < min){
			min = a[i];
			count ++;
		}
	}
	cout << count;
}
