#include <iostream>
#include <string>
#include<map>	//맵을 사용하기 위한 헤더
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	map<string, int> PocketmonBook; //포켓몬 도감
	map<int, string> PocketmonBookNum; //포켓몬 도감
	int N, M;
	cin >> N >> M; //입력될 포켓몬 갯수, 문제 갯수

	for (int i = 0; i < N; i++) {
		string name;
		cin >> name;
		//포켓몬 도감 채우기
		PocketmonBook.insert(map<string, int>::value_type(name, i + 1));
		PocketmonBookNum.insert(map<int, string>::value_type(i+1, name)); //숫자로 찾을때를 위한 맵
	}
	//문제
	for (int i = 0; i < M; i++) {
		string Quiz;
		cin >> Quiz;

		if (int(Quiz[0]) >= 65) {
			//문자열로 시작된다면
			cout << PocketmonBook.at(Quiz) << "\n"; //키로 값 찾기
		}
		else {
			cout << PocketmonBookNum.at(stoi(Quiz)) << "\n"; //키로 값 찾기
		}
	}

	return 0;
}