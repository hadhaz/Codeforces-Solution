#include <iostream>
using namespace std;

int main(){
	int x, n1, n2, p[100], q[100];
	bool found[100] = {false};
	bool allFound = true;
	cin >> x;
	
	cin >> n1;
	for(int i = 0; i < n1; i++)
		cin >> p[i];
	
	cin >> n2;
	for(int i = 0; i < n2; i++)
		cin >> q[i];
		
	for(int i = 0; i < n1; i++)
		found[p[i]] = true;
		
	for(int i = 0; i < n2; i++)
		found[q[i]] = true;
		
	for(int i = 1; i <= x; i++)
		if(not found[i]){
			allFound = false;
			break;
		}
	
	if(allFound)
		cout << "I become the guy.";
	else
		cout << "Oh, my keyboard!";
}
