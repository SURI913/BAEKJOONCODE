#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	cin >> input;
	bool result = 1;
	int j = input.length() - 1; //0부터 시작이므로
	for (int i = 0; i < input.length() / 2; i++) {
		if (input[i] != input[j]) {
			result = 0;
			break;
		}
		j--;
	}
	cout << result;
	return 0;
}