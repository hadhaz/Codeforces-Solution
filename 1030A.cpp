#include <iostream>
using namespace std;

int main() {
	int n;
	int test[100];
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
		cin >> test[i];
		
	for(int i = 0; i < n; i++){
		if(test[i] == 1){
			cout << "HARD";
			return 0;
		}
	}
	
	cout << "EASY";
}
