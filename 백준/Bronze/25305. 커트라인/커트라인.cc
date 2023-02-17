#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int i, int j) { //우리가 직접 비교하는 함수를 부른다.
	return j < i;
}

int main() {
	int N, k; //지원자 명, 상 받는 인원
	cin >> N >> k;
	vector<int> num;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		num.push_back(n);
	}
	
	sort(num.begin(), num.end(), compare); //내림차순 정렬

	cout << num[k - 1];
	return 0;
}