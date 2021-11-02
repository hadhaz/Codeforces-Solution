#include <iostream>
using namespace std;

int main() {
	int count = 0, a, b;
	cin >> a >> b;
	
	while(a <= b){
		a *= 3;
		b *= 2;
		count ++;
	}
	
	cout << count;
}
