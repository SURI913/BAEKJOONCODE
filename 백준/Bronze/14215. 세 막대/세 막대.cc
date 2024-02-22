#include <iostream>
#include <algorithm>
using namespace std;

int CheckPlane(int _value[2]) {
	//삼각형 조건이 맞으면 보냄
	if (_value[0] < _value[1] + _value[2]) {
		return _value[0] + _value[1] + _value[2];
	}
	//길이 조정
	else {
		return(_value[1] + _value[2] - 1) + _value[1] + _value[2];
	}
}

int main() {
	int input[3];
	for (int count = 0; count < 3; count++) {
		cin >> input[count];
	}
	sort(input, input + 3, greater<int>()); //내림차순
	cout << CheckPlane(input);
	return 0;
}
