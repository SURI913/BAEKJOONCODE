#include <iostream>
using namespace std;

int main() {
	int N, K; // N: 동전 종류 K: 꺼낼 동전 합
	cin >> N >> K;
	int* coin = new int[N];
	int count =0;
	for (int i = 0; i < N; i++) {
		cin >> coin[i];
	}
	for (int i = N-1; i >= 0; i--) {
		if (K / coin[i] > 0) {
			count += K / coin[i];
			K %= coin[i];
		}
		if (K == 0) break;
	}
	cout << count;
	return 0;
}