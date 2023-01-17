#include <iostream>
#include <string>
using namespace std;

int main() {
	int size, count = 0;
	cin >> size;
	string input;
	for (int i = 0; i < size; i++) {
		cin >> input;

		bool check[26] = { false,  }; //알파벳 크기 만큼
		check[(int)(input[0]) - 97] = true; //a=97

		for (int j = 1; j < input.size(); j++) {
			if (input[j] == input[j - 1]) { //연속된 문자
				continue;
			}
			// 연속하지 않고 순서가 맞지 않으면
			else if (input[j] != input[j - 1] && check[(int)(input[j]) - 97] == true) {
				count++;
				break;
			}
			//체크할 문자
			else {
				check[(int)(input[j]) - 97] = true;
			}
		}
	}
	cout << size - count << endl;
	return 0;
}