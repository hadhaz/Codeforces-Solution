#include <iostream>
using namespace std;

int main() {
	int m, n, time = 4*60, i;
	cin >> m >> n;
	
	time -= n;
	for(i = 0; i < m; i++){
		if(time - 5*(i+1) >= 0){
			time -= 5*(i+1);
		}
		else
			break;
	}
	cout << i;
}
