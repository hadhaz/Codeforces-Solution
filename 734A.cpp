#include <iostream>
using namespace std;

int main() {
	int n, countA = 0, countD = 0;
	string str;
	
	cin >> n >> str;
	for(int i = 0; i < n; i++){
		if(str[i] == 'A')
			countA ++;
		else
			countD ++;
	}
	if(countA > countD)
		cout << "Anton";
	else if(countA < countD)
		cout << "Danik";
	else
		cout << "Friendship";
}
