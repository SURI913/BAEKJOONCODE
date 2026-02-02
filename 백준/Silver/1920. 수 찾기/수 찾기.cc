#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int N, M;
vector<int> A;
vector<bool> result;

void BinarySearch(int searchNum) {
	int right = N - 1, left = 0; //오름차순 정렬했음
	int mid;
	while (left <= right) {
		mid = left + (right - left) / 2;
		if (A[mid] == searchNum) {
			result.push_back(1);
			return;
		}
		else if (A[mid] < searchNum)
			left = mid + 1; //오른쪽 절반
		else
			right = mid - 1; //왼쪽 절반
	}
	result.push_back(0); //못찾으면 false
}

void Print() {
	for (int i = 0; i < result.size(); i++ ) {
		cout << result[i] << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int tmp;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		A.push_back(tmp);
	}
	//정렬
	sort(A.begin(), A.end());
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> tmp;
		BinarySearch(tmp);
	}

	Print();
	return 0;
}