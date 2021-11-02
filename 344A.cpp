#include <iostream>
using namespace std;

int main(){
	int n, count = 0;
	string str, pre = "text";
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> str;
		if(str != pre)
			count ++;
		pre = str;
	}
	
	cout << count;
}
