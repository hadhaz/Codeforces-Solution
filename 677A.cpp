#include <iostream>
using namespace std;

int main() {
	int n, h, a[1000], count = 0;
	cin >> n >> h;
	
	for(int i = 0; i < n; i++)
		cin >> a[i];
		
	for(int i = 0; i < n; i++){
		if(a[i] <= h)
			count ++;
		else
			count += 2;
	}
	
	cout << count;
}
