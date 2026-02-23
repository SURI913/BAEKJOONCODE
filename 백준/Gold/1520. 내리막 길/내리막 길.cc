#include<iostream>
using namespace std;

#define MAX 500

int n, m, answer;
int map[MAX][MAX];
int dp[MAX][MAX];

int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };

int DFS(int x, int y) {
	if (x == n - 1 && y == m - 1)	return 1;
	if (dp[x][y] != -1) return dp[x][y];

	dp[x][y] = 0;
	for (int i = 0; i < 4; i++) {
		// 위치 인근을 탐색하기 위해
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue; //범위안에 없다면 0을 반환
		if (map[nx][ny] < map[x][y]) dp[x][y] += DFS(nx, ny);
	}
	return dp[x][y];
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			dp[i][j] = -1;
		}
	}

	cout << DFS(0, 0) << '\n';
	return 0;
}