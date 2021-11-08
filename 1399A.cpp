#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	(ios_base:: sync_with_stdio(false),cin.tie(NULL));
	int t, n, temp;
	vector<int> dif, a;
	
	cin >> t;
	bool ans[t] = {false};
	for(int i = 0; i < t; i++){
		cin >> n;
		for(int j = 0; j < n; j++){
			cin >> temp;
			a.push_back(temp);
		}
		if(n <= 1){
			cout << "YES\n";
			continue;
		}
		sort(a.begin(), a.end());
		for(int j = 0; j < n-1; j++){
			temp = abs(a[j] - a[j+1]);
			dif.push_back(temp);
		}
		sort(dif.begin(), dif.end(), greater<int>());
		
		if(dif[0] > 1)
			cout << "NO\n";
		else
			cout << "YES\n";
			
		a.clear();
		dif.clear();
	}
	
}
