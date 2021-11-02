#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double result = 0;
	int n, p[100];
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> p[i];
	}
	
	for(int i = 0; i < n; i++){
		result += p[i];
	}
	
	cout << fixed << setprecision(12) << result/n;
}
