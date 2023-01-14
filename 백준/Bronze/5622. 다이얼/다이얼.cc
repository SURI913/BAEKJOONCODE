#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	cin >> input;
	
	int dialTime[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };//각 알파벳 별 걸리는 시간
	int result = 0;
	for (int i = 0; i < input.size(); i++) {
		result += dialTime[input[i] - 'A']; //입력된 값이 A면 0, B면 1...
		//이런 식으로 입력된 값을 다이얼 타임 값을 가져오는데에 사용한다.
	}
	cout << result;
	return 0;
}