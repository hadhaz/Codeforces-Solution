#include <iostream>
using namespace std;

int main() {
	int n, m[100], p[100];
	cin >> n;
	
	for(int i = 0; i < n; i++)
		cin >> m[i];
		
	for(int i = 0; i < n; i++){
		p[m[i]-1] = i+1;
	}
	
	for(int i = 0; i < n; i++)
		cout << p[i] << " ";
}
