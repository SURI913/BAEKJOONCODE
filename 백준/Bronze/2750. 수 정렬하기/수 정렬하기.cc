#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N; // N: 입력수
	cin >> N;
	
	vector<int> num;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		num.push_back(n);
	}

	sort(num.begin(), num.end()); //오름차순 정렬

	
	for (int i = 0; i < N ; i++) {
		cout << num[i] << endl;
	}
	
	return 0;
}