#include <iostream>
#include <math.h>
using namespace std;

void hanoiTower(int n, char from, char tmp, char to) {
	if (n == 1) {
		cout << from << " " << to << '\n';
	}
	else {
		hanoiTower(n - 1, from, to, tmp);
		cout << from << " " << to << '\n';
		hanoiTower(n - 1, tmp, from, to);
	}
}
int main() {
	int input;
	cin >> input;
	//하노이탑 최소횟수 식 2^n-1
	cout <<  (int)pow(2, input) - 1 << '\n'; // 혹은 시프트 연산 사용 (1 << input)-1
	hanoiTower(input, '1', '2', '3');
	
	return 0;
}