#include<iostream>
#include<vector>
using namespace std;
int sum(int a);

int  main() {
	bool check[10001]{ false };

	for (int i = 1; i < 10001; i++) {
		int n = sum(i);
		if (n < 10001) {
			check[n] = true;
		}
	}

	for (int i = 1; i < 10001; i++) {
		if (!check[i]) {
			cout << i << endl;
		}
	}
	return 0;
}

int sum(int a) {
	int sum = a;

	while (a != 0) {
		sum += a % 10; //1의자리 수 더하기
		a /= 10; //자릿수 분해
	}
	return sum;
}
