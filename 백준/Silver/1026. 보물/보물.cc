#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N, tmp;
	vector<int> A, B, C;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		A.push_back(tmp);
	}
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		B.push_back(tmp);
	}
	C = B;
	sort(A.begin(), A.end());
	sort(C.begin(), C.end(), greater<int>());

	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += A[i] * C[i];
	}
	cout << sum << '\n';
	return 0;
}