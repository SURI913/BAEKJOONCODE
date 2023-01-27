#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int i = 1;
	for (int sum = 2; sum <= n; i++) {
		if (n == 1) {
			i = 1;
			break;
		}
		sum += 6 * i;
	}
	cout << i;
	return 0;
}