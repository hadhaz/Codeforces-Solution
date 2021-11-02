#include <iostream>
using namespace std;

int main() {
	short int n, a[100], min = 101, max = -1, noteMax, noteMin;
	cin >> n;
	
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	for(int i = 0; i < n; i++){
		if(a[i] > max){
			noteMax = i;
			max = a[i];
		}
		if(a[i] <= min){
			noteMin = i;
			min = a[i];
		}
	}
	
	if(noteMax > noteMin){
		cout << (n - 1 - noteMin) + (noteMax) - 1;
	}
	else
		cout << (n - 1 - noteMin) + (noteMax);
}
