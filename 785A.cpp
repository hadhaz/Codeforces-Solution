#include <iostream>
using namespace std;

int main() {
	int n, sum = 0; string str[200000];
	struct polyhedron{
		char nama;
		int nilai;
	};
	polyhedron anton[] = {'T', 4, 'C', 6, 'O', 8, 'D', 12, 'I', 20};
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> str[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 5; j++){
			if(str[i][0] == anton[j].nama){
				sum += anton[j].nilai;
				break;
			}
		}		
	}
	cout << sum;
}
