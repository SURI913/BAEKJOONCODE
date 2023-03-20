#include <iostream>
using namespace std;
int main() {
	int n, m, sum=0;
	cin >> n >> m;
	int* card = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> card[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if (card[i] + card[j] + card[k] <= m && card[i] + card[j] + card[k] > sum) {
					sum = card[i] + card[j] + card[k];
				}
			}
		}
	}
	cout << sum << '\n';

	return 0;
}