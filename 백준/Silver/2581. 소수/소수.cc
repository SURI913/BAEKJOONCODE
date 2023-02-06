#include <iostream>
using namespace std;

int main() {
	int n,m;
	int add = 0;
	int min = 999999;
	cin >> m >> n; //m이상 n이하의 수
	for (m; m <= n; m++) {
		int count = 0;
		for (int j = 1; j <= m; j++) {
			if (m % j == 0) {
				count++;
			}
		}
		if (count == 2) {//1과 n, 2개만 남을경우
			add += m;
			if (min > m) {
				min = m;
			}
		}
	}
	if (add == 0) {
		cout << -1;
	}
	else {
		cout << add << endl;
		cout << min << endl;
	}
	return 0;
}