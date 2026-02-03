#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

#define MAX 129

int white, blue;
vector<bool> paper[MAX];

void Divide(int y,int x, int n) {
	// 1면 | 2면
	// -------------
	// 3면 | 4면
	bool isBlue = paper[y][x];
	bool isCut = false;
	for (int i = y; i < n+y; i++) {
		for (int j = x; j < n+x; j++) {
			if (paper[i][j] != isBlue) {
				int mid = n / 2;
				Divide(y, x, mid); //1면
				Divide(y, x + mid, mid); //2면
				Divide(y + mid, x, mid); //3면
				Divide(y + mid, x + mid, mid); //4면
				return;
			}
		}
	}

	if (isBlue) blue++;
	else white++;
}

void Print() {
	cout << white << '\n' << blue << '\n';
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