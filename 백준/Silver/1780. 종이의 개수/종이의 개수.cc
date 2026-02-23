#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

#define MAX 3000

int One, Zero, Minus;
vector<int> paper[MAX];

void Divide(int y, int x, int n) {
	// 1면 | 2면 | 3면
	// -------------------
	// 4면 | 5면 | 5면
	// -------------------
	// 6면 | 7면 | 8면
	int type = paper[y][x];
	bool isCut =false;
	for (int i = y; i < n + y; i++) {
		for (int j = x; j < n + x; j++) {
			if (paper[i][j] != type) {
				//타입이 시작과 다르면 자름
				isCut = true;
				break;
			}
		}
	}
	
	if (isCut) {
		// 3x3으로 쪼갬 (모든 조각 크기 = n/3)
		int mid = n / 3;
		for (int dy = 0; dy < 3; dy++) {
			for (int dx = 0; dx < 3; dx++) {
				Divide(y + dy * mid, x + dx * mid, mid);
			}
		}
	}
	else {
		if (type == -1) Minus++;
		else if (type == 0) Zero++;
		else One++;
	}

}

void Print() {
	cout << Minus << '\n' << Zero << '\n' << One << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tmp, N;
	cin >> N;

	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			cin >> tmp;
			paper[y].push_back(tmp);
		}
	}

	Divide(0, 0, N);
	Print();
}