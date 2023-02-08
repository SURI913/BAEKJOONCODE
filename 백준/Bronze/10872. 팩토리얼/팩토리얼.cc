#include <iostream>
#include <vector>
using namespace std;

int factorial(int n) {
	if (n == 1) return 1;
	return (n * factorial(n - 1));
}

int main() {
	int n;
	cin >> n;
	if (n == 0) cout << 1;
	else cout << factorial(n);
	return 0;
}