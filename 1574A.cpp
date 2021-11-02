#include <bits/stdc++.h>
using namespace std;

void bracket(short int x){
	for(int i = 0; i < x; i++){
		for(int j = 0; j < x - i; j++)
			cout << "(";
		for(int j = 0; j < x - i; j++)
			cout << ")";
		for(int j = 0; j < i; j++)
			cout << "(";
		for(int j = 0; j < i; j++)
			cout << ")";
		cout << endl;
	}
}

int main() {
	int t;
	cin >> t;
	
	short int arr[t];
	for(int i = 0; i < t; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i < t; i++){
		bracket(arr[i]);
	}
	return 0;
}
