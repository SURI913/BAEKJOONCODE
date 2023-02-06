#include <iostream>
using namespace std;

int main() {
	int size;
	int result = 0;
	cin >> size;
	for (int i = 0; i < size; i++) {
		int count = 0;
		int n;
		cin >> n;
		for (int j = 1; j <= n; j++) {
			if (n % j == 0) {
				count++;
			}
		}
		if (count == 2) {//1과 n, 2개만 남을경우
			result++;
		}
	}
	cout << result;
	return 0;
}