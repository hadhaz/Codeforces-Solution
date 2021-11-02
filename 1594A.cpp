#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	long long arr[t];
	for(int i = 0; i < t; i++){
		cin >> arr[i];
	}
	
	long long l, r;
	for(int i = 0; i < t; i++){
		if(arr[i]%2 == 1){
			l = arr[i]/2;
			r = arr[i] - l;
		}
		else{
			l = -1*arr[i] + 1;
			r = arr[i];
			
		}
		cout << l << " " << r << endl;
	}
	
}
