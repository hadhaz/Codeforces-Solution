#include <iostream>
using namespace std;

int main() {
	long long k, n, w, sum = 0; int i = 1;
	cin >> k >> n >> w;
	while(i <= w){
		sum += k*i;
		i++;
	}
	if(sum - n > 0)
		cout << sum - n;
	else
		cout << 0;
}
