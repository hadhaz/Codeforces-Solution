#include <iostream>
using namespace std;

int main() {
	int n, p[100], q[100], count = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> p[i] >> q[i];
	}
	
	for(int i = 0; i < n; i++){
		if(q[i]-p[i] > 1)
			count ++;
	}
	
	cout << count;
}
