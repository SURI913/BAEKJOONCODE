#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;
		cout << input[0] << input[input.size() - 1] << '\n';
	}
	
	return 0;
}