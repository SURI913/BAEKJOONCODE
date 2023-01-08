#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size; //줄

	string input;
	for (int i = 0; i < size; i++) {
		int len;
		cin >> len;//글자 하나당 반복 횟수
		cin >> input;
		for (int j = 0; j < input.size(); j++) {	//글자 인덱스
			for (int k = 0; k < len; k++) {	//글자 반복
				cout << input[j];
			}
		}
		cout << endl;
	}
	return 0;
}