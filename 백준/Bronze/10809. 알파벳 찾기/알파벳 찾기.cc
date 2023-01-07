#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	cin >> input;

	string alpha = "abcdefghijklmnopqrstuvwxyz"; //알파벳 위치값 설정

	for (int i = 0; i < alpha.size(); i++) {
		cout << (int)input.find(alpha[i]) << " "; //STL사용
		// find 함수는 입력 문자열이 최초로 등장하는 위치의 인덱스를 반환하는 함수
	}
	cout << endl;
	return 0;
}