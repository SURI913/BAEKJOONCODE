#include<iostream>
#include<stack>
#include <queue>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::stack<int> get_snack;
	std::stack<int> late_zone;
	
	int N, count = 1; //학생 수
	std::cin >> N;
	
	//순서대로 받음
	while (N--)
	{
		int order;
		std::cin >> order;
		if (order == get_snack.size() + 1) {
			get_snack.push(order); //순서가 맞다면 미리 받을 수 있도록
		}
		else {
			late_zone.push(order);
		}
		//비어있지 않다면 확인 넣을 수 있는 수인지 확인 할 것
		while (!late_zone.empty() && get_snack.size() + 1 == late_zone.top()) {
			//late_zone 상단의 값이 순서가 맞으면 정렬
			get_snack.push(late_zone.top());
			late_zone.pop();
		}
	}

	if (late_zone.empty()) {
		std::cout << "Nice" << '\n';
	}
	else
	{
		std::cout << "Sad" << '\n';
	}

	return 0;
}