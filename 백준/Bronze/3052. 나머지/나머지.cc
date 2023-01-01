#include<iostream>
using namespace std;

int main() {
	int num[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
		num[i] %= 42;
	}

	//서로다른 값 카운트
	int result = 0;

	for (int i = 0; i < 10 ; i++) {
		int  count = 0;

		for (int j = 0 ; j < i ; j++) {
			if (num[i] == num[j]) {	//비교하는 배열값의 수가 같을때
				count++;
			}
		}
		if (count == 0) {
			result++;
		}
	}

	//출력
	cout << result << endl;
	return 0;
}