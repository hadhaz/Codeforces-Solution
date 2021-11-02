#include <iostream>
using namespace std;

int main() {
	int M, N, temp;
	cin >> M >> N;
	
	temp = M*N%2;
	temp = M*N - temp;
	cout << temp/2;
	
}
