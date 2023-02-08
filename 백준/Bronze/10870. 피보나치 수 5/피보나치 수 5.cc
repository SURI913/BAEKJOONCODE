#include <iostream>
#include <vector>
using namespace std;

int fib_iter(int n) {
	int result = 0;
	if (n == 0) return 0;
	if (n == 1) return 1;

	int pp = 0;
	int  p = 1;
	for (int i = 2; i <= n; i++) {
		result = pp + p;
		pp = p;
		p = result;
	}
	return result;
}


int main() {
	int n;
	cin >> n;
	cout << fib_iter(n);
	return 0;
}