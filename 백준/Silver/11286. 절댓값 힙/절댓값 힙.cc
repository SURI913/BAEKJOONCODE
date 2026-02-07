#include <iostream>
#include <queue>
using namespace std;

//절대값 비교
struct Compare {
	bool operator()(int a, int b) {
		int aa = abs(a);
		int ba = abs(b);
		if (aa == ba)
			return a > b; // 절대값이 같은 경우 가장 작은 원소로
		return aa > ba;
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, x;
	
	priority_queue<int, vector<int>, Compare> pq;

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