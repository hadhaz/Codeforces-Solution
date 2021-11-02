#include <iostream>
using namespace std;

int main() {
	int n, dollar[] = {1, 5, 10, 20, 100}, i = 4, count = 0;
	cin >> n;
	
	while(n > 0){
		if(n-dollar[i] >= 0){
			n -= dollar[i];
			count ++;
		}
		else
			i--;
	}
	cout << count;
}
