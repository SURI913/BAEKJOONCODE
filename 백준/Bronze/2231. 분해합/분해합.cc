#include <iostream>
using namespace std;

int main() {
	int n, temp, sum;
	cin >> n;

	for (int i = 1; i < n; i++) {
		temp = i; //i부터 분리
		sum = i;
		while (temp) {
			sum += temp % 10; //1의자리수 부터 덧셈
			temp /= 10; //분리
		}
		if (n == sum) {// 더 한 값이 받은 값이랑 동일 하면 출력 i 출력
			cout << i << '\n';
			return 0;
		}
	}
	cout << "0" << '\n';
	return 0;
}