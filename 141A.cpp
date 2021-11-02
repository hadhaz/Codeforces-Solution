#include <iostream>
using namespace std;

int main() {
	string s1, s2, s3; 
	int len1, len2, len3;
	bool found;
	cin >> s1 >> s2 >> s3;
	
	len1 = s1.length();
	len2 = s2.length();
	len3 = s3.length();
	
	if(len1 + len2 != len3){
		cout << "NO";
		return 0;
	}
	
	for(int i = 0; i < len1; i++){
		found = false;
		for(int j = 0; j < len3; j++){
			if(s1[i] == s3[j]){
				s3.erase(j, 1);
				len3 --;
				found = true;
				break;
			}
		}
		if(not found){
			cout << "NO";
			return 0;
		}
	}
	
	for(int i = 0; i < len2; i++){
		found = false;
		for(int j = 0; j < len3; j++){
			if(s2[i] == s3[j]){
				s3.erase(j, 1);
				len3--;
				found = true;
				break;
			}
		}
		if(not found){
			cout << "NO";
			return 0;
		}
	}
	
	cout << "YES";
}
