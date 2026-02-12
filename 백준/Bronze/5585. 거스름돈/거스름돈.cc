#include<iostream>
using namespace std;

int main() {
	int money, result = 0;

	cin >> money;

	money = (1000 - money);
	
	while (money > 0) {
		if (money >= 500) {
			result += (money / 500);
			money %= 500;
		}
		else if (money >= 100) {
			result += (money / 100);
			money %= 100;
		}
		else if (money >= 50) {
			result += (money / 50);
			money %= 50;
		}
		else if (money >= 10) {
			result += (money / 10);
			money %= 10;
		}
		else if (money >= 5) {
			result += (money / 5);
			money %= 5;
		}
		else if (money >= 1) {
			result += money; //남은잔돈털고 빠져나감
			money = 0;
		}
	}

	cout << result << '\n';
	return 0;
}