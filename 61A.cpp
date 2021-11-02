#include <iostream>
using namespace std;

int main() {
	string input1, input2;
	cin >> input1 >> input2;
	int len = input1.length();
	
	for(int i = 0; i < len; i++){
		if(input1[i] == input2[i])
			cout << "0";
		else
			cout << "1";
	}
}
