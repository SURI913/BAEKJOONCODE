#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int N;
	cin >> N;
	vector<int> num;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		num.push_back(n);
	}
	
	sort(num.begin(), num.end()); //내림차순 정렬

	for (auto& i : num) {
		cout << i << "\n";
	}
	return 0;
}