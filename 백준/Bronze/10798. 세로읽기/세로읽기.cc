#include <iostream>
#include <string>
using namespace std;
int main() {
	string input[5];
	for (int i = 0; i < 5; i++) {
		cin >> input[i];
	}

	for (int i = 0; i < 15; i++) {
		for (int k = 0; k < 5; k++) {
			if (i < input[k].size()) //input[k]의 사이즈 내에서 출력
				cout << input[k][i];
		}
	}
	return 0;
}