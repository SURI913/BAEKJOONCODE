#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	//2차원 동적 할당
	int box[101] = {0, };
	for (int l = 0; l < M; l++) {
		int i, j, k;
		cin >> i >> j >> k;
		for (int a = i; a <= j; a++) {
			box[a] = k;
		}
	}

	for (int i = 1; i <= N; i++) {
		cout << box[i] << " ";
	}

	return 0;
}