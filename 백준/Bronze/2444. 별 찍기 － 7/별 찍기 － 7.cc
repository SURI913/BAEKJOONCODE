#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) { // 1~N까지 N번 반복
		for (int j = N - i; j > 0; j--) { //N-i ~ 1까지 N번까지 반복 횟수에 따라 공백 생성
			cout << " ";
		}
		for (int j = 2 * i - 1; j > 0; j--) { //옆에도 같은 방법으로 복사해야함. 따라서 *2
			cout << "*";
		}
		cout << '\n'; //밑에 단 만들기
	}
	for (int i = 1; i < N; i++) {//1~N-1까지 N-1번 반복?
		for (int j = 0; j < i; j++) {
			cout << " ";
		}

		for (int j = 2 * (N - i) - 1; j > 0; j--) { //별하나 소거를 위해
			cout << "*";
		}
		cout << '\n';
	}
	return 0;
}