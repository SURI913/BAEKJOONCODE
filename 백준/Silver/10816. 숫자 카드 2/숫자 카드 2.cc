#include <iostream>
#include <string>
#include<map>	//맵을 사용하기 위한 헤더
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	map<int, int> card;
	int N, M;
	cin >> N;	//

	for (int i = 0; i < N; i++) {
		int number;
		cin >> number;
		if (card.find(number) != card.end()) {
			card[number]++;	//중복이면 값 ++
		}
		else {
			card.insert(map<int, int>::value_type(number, 1));
		}
	}
	cin >> M;

	//문제
	for (int i = 0; i < M; i++) {
		int Quiz;
		cin >> Quiz;

		if (card.count(Quiz)) {
			//카드가 있다면
			cout << card.at(Quiz) << " "; //키로 값 찾기
		}
		else {
			cout << "0 ";
		}
	}

	return 0;
}