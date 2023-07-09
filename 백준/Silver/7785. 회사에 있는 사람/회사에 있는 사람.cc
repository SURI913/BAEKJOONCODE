#include <iostream>
#include <string>
#include<map>	//해쉬 맵을 사용하기 위한 헤더
using namespace std;

int main() {
	map<string, string,greater<string>> isEnter; //출입확인을 위한 해쉬 맵
	int N = 0;
	
	cin >> N;

	for (int i = 0; i < N; i++) {
		string enter, name;
		cin >> name >> enter;
		//중복이면 지움
		if (isEnter.count(name) != 0) {
			isEnter.erase(name);
		}
		//아니라면 입력
		else {
			isEnter.insert(map<string, string, greater<string>>::value_type(name, enter));
		}
	}

	for (auto& result : isEnter) {
		cout << result.first << "\n";
	}

	return 0;
}