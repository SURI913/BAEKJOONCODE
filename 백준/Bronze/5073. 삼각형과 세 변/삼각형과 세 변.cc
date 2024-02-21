#include <iostream>
#include <algorithm>
using namespace std;

string CheckPlane(int _value[2]) {
	//끝나는 조건
	if (_value[0] == 0 && _value[1] == 0 && _value[2] == 0) return "End";

	//삼각형이 아니거나
	if (_value[0] >= _value[1] + _value[2]) {
		return "Invalid";
	}
	//다 같거나
	else if (_value[0] == _value[1] && _value[1] == _value[2] && _value[0] == _value[2]) {
		return "Equilateral";
	}
	//다 다르거나
	else if (_value[0] != _value[1] && _value[1] != _value[2] && _value[0] != _value[2]) {
		return "Scalene";
	}
	//두변 만 같거나
	else {
		return "Isosceles";
	}
}

int main() {
	int input[3];
	int count = 0;
	while (true)
	{
		if (count < 3) {
			cin >> input[count];
			count++;
		}
		else {
			count = 0;
			sort(input, input + 3, greater<int>()); //내림차순

			if (CheckPlane(input) == "End") {
				break;
			}
			else {
				cout << CheckPlane(input) << "\n";
				continue;
			}
		}

	}
	return 0;
}
