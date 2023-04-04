#include <iostream>
using namespace std;

//거스름돈 단위
const int Quarter = 25;
const int Dime = 10;
const int Nickel = 5;
const int Penny = 1;

int main() {
	//탐욕 알고리즘 사용
	int T;
	cin >> T;
	int result = 0;
	for (int i = 0; i < T; i++) {
		int C;	//거스름돈(단위: 센트)(1달러=100센트)
		cin >> C;

		int quarter = C / Quarter;
		C %= Quarter;

		int dime = C / Dime;
		C %= Dime;

		int nickel = C / Nickel;
		C %= Nickel;

		int penny = C;

		cout << quarter << " " << dime << " " << nickel << " " << penny << '\n';
	}
	return 0;
}