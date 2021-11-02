#include <iostream>
using namespace std;

int main(){
	int s[4], count = 0;
	for(int i = 0; i < 4; i++)
		cin >> s[i];
	for(int i = 0; i < 3; i++)
		for(int j = i + 1; j < 4; j++){
			if(s[i] == 404)
				continue;
			if(s[i] == s[j]){
				count ++;
				s[j] = 404;
			}
	}
	cout << count;
}
