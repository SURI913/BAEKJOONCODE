#include <iostream>
#include<queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N, K;
	std::cin >> N >> K;

	queue<int>my_queue;
	for (int i = 1; i <= N; i++) {
		my_queue.push(i);
	}

	cout << "<";
	while (my_queue.size() > 1) {
		for (int i = 1; i < K; i++) {
			int tmp = my_queue.front();
			my_queue.pop();
			my_queue.push(tmp);
		}
		cout << my_queue.front() << ", ";
		my_queue.pop();
	}
	cout << my_queue.front() << ">\n";
	return 0;

}