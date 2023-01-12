#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int count = 1; //첫 단어 카운트

	getline(cin, input); //입력값 받아오기

	for (int i = 0; i < input.size(); i++) {
		if (input[i] == ' ') {
			count++;
		}
		//공백이 연속으로 나올 시 삭제
		if (input[i] == ' ' && input[i - 1] == ' ') {
			continue;
		}
	}

	//첫번째에 공백시 삭제
	if (input[0] == ' ') {
		count--;
	}

	//마지막에 공백시 삭제
	if (input[input.size() -1] == ' ') {
		count--;
	}

	cout << count;

	return 0;
}