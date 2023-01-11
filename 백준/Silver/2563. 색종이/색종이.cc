#include <iostream>
using namespace std;
const int ROW = 100; //행
const int COL = 100; //열

int main() {
	bool paper[ROW][COL] { false };
	
	int n, x, y;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> x >> y; //왼쪽아래 색종이 좌표값 받기

		for (int j = x; j < x+10; j++) { //색종이 사이즈는 10*10이다.
			for (int k = y; k < y+10; k++) { //칠한 색종이 입력
				if (paper[j][k] == false) {
					paper[j][k] = true; //색종이 범위
					count++;
				}
				else continue;
			}
		}
	}
	cout << count <<endl;

	return 0;
}