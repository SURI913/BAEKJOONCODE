#include <iostream>
#include <string>
#include<map>	//맵을 사용하기 위한 헤더
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	map<string, int> Person;
	int N, M;
	cin >> N >> M;	

	for (int i = 0; i < N; i++) {
		string name;
		cin >> name;
		if (Person.find(name) != Person.end()) {
			Person[name]++;	//중복이면 값 ++
		}
		else {
			Person.insert(map<string, int>::value_type(name, 1));
		}
	}

	//문제
	int count = 0;
	for (int i = 0; i < M; i++) {
		string name;
		cin >> name;
		if (Person.find(name) != Person.end()) {
			Person[name]++;	//중복이면 값 ++
			count++;
			//cout << name << '\n';
		}
		else {
			Person.insert(map<string, int>::value_type(name, 1));
		}
	}
	cout << count << '\n';

	for (auto& result : Person) {
		if (result.second > 1) {
			cout << result.first << '\n';
		}
	}

	return 0;
}