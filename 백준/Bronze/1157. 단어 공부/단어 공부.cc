#include <iostream>
#include<string>
using namespace std;
void check(string w);

int alpha[26];
//대소문자 구분을 하지 않는다 따라서 26개만

int main() {
	string word;
	cin >> word;
	check(word);

	return 0;
}

void check(string w) {
	int result = 100;

	//빈도수 체크
	for (int i = 0; i < w.size(); i++) {
		//A = 65, Z = 90
		//a = 97, z = 122
		if (w[i] < 'a') {
			alpha[w[i] - 'A']++;//대문자
		}
		else{
			alpha[w[i] - 'a']++;	//소문자
		}
	}

	//최대값 찾기
	int max = 0, max_index = 0;
	for (int i = 0; i < 26; i++) {
		if (max < alpha[i]) {
			max = alpha[i];
			max_index = i;
		}
	}

	//중복체크
	int count = 0;
	for (int i = 0; i < 26; i++) {
		if (max == alpha[i]) { //최대값 중복 이라면 카운트
			count++;
		}
	}

	if (count > 1) { //최대값 중복 시
		cout << "?" << endl;
	}
	else { //아닐 시
		cout << (char)(max_index + 'A') << endl;
	}
}