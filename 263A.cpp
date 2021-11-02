#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int X, noteR, noteC;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin >> X;
			if(X == 1){
				noteR = i;
				noteC = j;
				break;
			}
		}
	}
	cout << abs(noteR - 2) + abs(noteC - 2);
}
