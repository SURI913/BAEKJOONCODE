#include <iostream>
#include<deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N;
	std::cin >> N;

	deque<int>my_queue;
	for (int i = 0; i < N; i++) {
		int command, input;
		std::cin >> command;
		switch (command)
		{
		case 1:
			std::cin >> input;
			my_queue.push_front(input);
			break;
		case 2:
			std::cin >> input;
			my_queue.push_back(input);
			break;
		case 3:
			if (!my_queue.empty()) {
				std::cout << my_queue.front() << "\n";
				my_queue.pop_front();
			}
			else {
				std::cout << -1 << "\n";
			}
			break;
		case 4:
			if (!my_queue.empty()) {
				std::cout << my_queue.back() << "\n";
				my_queue.pop_back();

			}
			else {
				std::cout << -1 << "\n";
			}
			break;

		case 5:
			std::cout << my_queue.size() << "\n";
			break;
		case 6:
			std::cout << my_queue.empty() << "\n";
			break;
		case 7:
			if (!my_queue.empty()) {
				std::cout << my_queue.front() << "\n";
			}
			else {
				std::cout << "-1\n";
			}
			break;
		case 8:
			if (!my_queue.empty()) {
				std::cout << my_queue.back() << "\n";
			}
			else {
				std::cout << "-1\n";
			}
			break;
		default:
			break;
		}
	}

	return 0;

}