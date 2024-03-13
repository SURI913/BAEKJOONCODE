#include <queue>
#include <iostream>

int main() {

	int N;
	std::cin >> N;
	//1~N까지  1번 카드가 제일 위에, N번 카드가 제일 아래인 상태로 순서대로 카드가 놓여 있다.
	std::queue<int> my_cards;
	int card_number = 1;
	while (N--) {
		my_cards.push(card_number);
		card_number++;
	}

	//맨 위에 있는 카드를 버린다.
	
	while (my_cards.size()-1) {
		my_cards.pop();
		my_cards.push(my_cards.front());
		my_cards.pop();
	}

	std::cout << my_cards.front() << '\n';

	return 0;

}