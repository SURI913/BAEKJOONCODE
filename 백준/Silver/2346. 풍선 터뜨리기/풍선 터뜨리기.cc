#include <iostream>
#include<deque>
#include <utility>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N;
	std::cin >> N;

	deque<pair<int, int>>my_queue;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		my_queue.push_back(make_pair(tmp, i + 1));
	}

	while(true) {
		int tmp = my_queue.front().first;

		cout << my_queue.front().second << " ";
		
		my_queue.pop_front(); //이미 출력 한 애는 뺌

		if (my_queue.empty()) break;

		if (tmp < 0) {
			//음수가 적혀있을때는 왼쪽으로
			for (int i = tmp; i < 0; i++) {
				my_queue.push_front(my_queue.back());
				my_queue.pop_back();
			}
		}
		else {
			//양수일떄는 오른쪽으로
			for (int i = 0; i < tmp - 1; i++) {
				my_queue.push_back(my_queue.front());
				my_queue.pop_front();
			}
		}
	}

	return 0;

}