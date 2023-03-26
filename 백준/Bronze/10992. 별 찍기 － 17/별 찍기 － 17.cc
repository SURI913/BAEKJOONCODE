#include <iostream>
using namespace std;
int main() {
	int floor;
	cin >> floor;
	for (int i = 1; i <= floor; i++) {
		if (floor == i) {
			for (int j = 1; j < floor * 2; j++) {
				cout << "*"; //바닥면 채우기
			}
		}
		else {
			for (int j = floor-i; j > 0; j--) {
				cout << ' '; //floor보다 -i만큼 공백
			}
			cout << '*';

			if (i != 1) {
				for (int j = 1; j < (i-1)*2; j++) {
					cout << ' '; //floor보다 -1만큼 공백이었다가
				}
				cout << '*'; //닫음
			}
		}
		cout << '\n';
	}
	return 0;
}