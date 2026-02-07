#include <iostream>
#include <queue>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, x;
	//내림차순 정렬이 되어야 함
	priority_queue<int, vector<int>, greater<int>> pq;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x;
		if (pq.empty() && x == 0)
			cout << 0 << '\n';
		else if (x == 0) {
			cout << pq.top() << '\n';
			pq.pop();
		}
		else {
			pq.push(x);
		}

	}
	return 0;
}