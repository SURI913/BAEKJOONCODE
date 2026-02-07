#include <iostream>
#include <queue>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N,x;
	priority_queue<int> pq;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x;
		pq.push(x);

		if(pq.empty() && x == 0)
			cout << 0 << '\n';
		else if (x == 0) {
			cout << pq.top() << '\n';
			pq.pop();
		}

	}
	return 0;
}