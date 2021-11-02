#include <iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if((i+1)%2 == 0 && (i+1)%4 != 0 && j < n - 1)
				cout << ".";
			else if((i+1)%2 == 0 && (i+1)%4 == 0 && j > 0)
				cout << ".";
			else
				cout << "#";
		}
		cout << endl;
	}
}
