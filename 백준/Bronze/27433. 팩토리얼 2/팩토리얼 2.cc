#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int input;
	cin >> input;
	long long result = 1;
	for (int i = 1; i <= input; i++) {
		result *= i;
	}
	cout << result;
	return 0;
}