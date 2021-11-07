#include <iostream>
using namespace std;

int main() {
	int r, b, same, dif;
	cin >> r >> b;
	if(r >= b){
		r -= b;
		same = r/2;
		dif = b;
	}
	else{
		b -= r;
		same = b/2;
		dif = r;
	}
	
	cout << dif << " " << same;
}
