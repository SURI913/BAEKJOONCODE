#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int h, w, n;
		int y = 0; //층수
		int x = 0; //층당 방번호
		cin >> h >> w >> n;
		while (n > 0) {
			if (h < n) {
				n -= h;
				y = n;
				//cout << y << "층입니다" << endl;
				if (x <= w) {
					x++;
					//cout << x << "번째 방이 나갔습니다." << endl;
					//x번째 방이 모두 나갔습니다
				}
				else {
					x = 0; continue;
				}
			}
			else {
				y = n;
				//cout << y << "층입니다" << endl;
				if (x <= w) {
					x++;
					//cout << x << "번째 방이 나갔습니다." << endl;
				}
				n = 0;
			}
		}
		if (x < 10) cout << y << '0' << x << endl;
		else cout << y << x << endl;
	}
	return 0;
}