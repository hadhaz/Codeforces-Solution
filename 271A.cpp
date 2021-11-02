#include <iostream>
using namespace std;

bool distinct(int n){
	int i = 0, digit[4];
	while(n > 0){
		digit[i] = n%10;
		n/=10;
		i++;
	}
	for(int j = 0; j < i - 1; j++)
		for(int k = j+1; k < i; k++)
			if(digit[j] == digit[k])
				return false;
	
	return true;
}

int main() {
	int n;
	cin >> n; 
	n++;
	
	while(not distinct(n)){
		n++;
	}
	
	cout << n;
}
