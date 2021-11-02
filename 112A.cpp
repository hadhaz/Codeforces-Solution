#include <iostream>
#include <cmath>
using namespace std;

int main() {
	string str1, str2; int sum1 = 0, sum2 = 0; bool found = false;
	cin >> str1 >> str2;
	
	for(int i = 0; i < str1.length(); i++){
		sum1 = abs(str1[i] - 65)%32;
		sum2 = abs(str2[i] - 65)%32;
		if(sum1 > sum2){
			cout << 1;
			found = true;
			break;
		}
		else if(sum2 > sum1){
			cout << -1;
			found = true;
			break;
		}
	}
	if(not found)
		cout << 0;
}
