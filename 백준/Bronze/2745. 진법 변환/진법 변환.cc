#include <iostream>
#include <string>
using namespace std;
int main() {
	string N;
	int B;
	int result = 0, temp =1;
	cin >> N >> B;

	for (int i = N.size()-1; i >= 0;  i--) {
		int num;
		//진법에 맞춰 바꿔주기

		if (N[i] >= '0' && N[i] <= '9') {
			//숫자인가
			num = N[i] - '0';
		}
		else {
			//영어임
			num = N[i] - 'A'+10;// A = 10
		}

		num *= temp;
		result += num;
		//제곱을 위한 연산
		temp *= B;
	}
	cout << result << '\n';
	return 0;
}