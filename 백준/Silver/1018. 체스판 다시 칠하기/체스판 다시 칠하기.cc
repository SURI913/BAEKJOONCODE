#include <iostream>
#include <string>
using namespace std;
string WB[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
};

string BW[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
};

string *board;

int WB_count(int x, int y) {
	int count = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {//좌표 하나하나 8*8사이즈로 검토
			if (board[x + i][y + j] != WB[i][j]) {
				count++;
			}
		}
	}
	return count;
}

int BW_count(int x, int y) {
	int count = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j] != BW[i][j]) {
				count++;
			}
		}
	}
	return count;
}

int main() {
	int N, M;
	int minVal = 12345;
	cin >> N >> M;
	board = new string[N];
	for (int i = 0; i < N; i++) {
		cin >> board[i];
	}	//값 입력

	for (int i = 0; i + 8 <= N; i++) {
		for (int j = 0; j + 8 <= M; j++) {
			int temp;
			temp = min(WB_count(i, j), BW_count(i, j));
			if (temp < minVal) {
				minVal = temp;
			}
		}
	}
	cout << minVal;
	return 0;
}