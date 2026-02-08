#include<iostream>
#include<queue>
#include<algorithm>
#define MAX 101
using namespace std;

/*
4 6
101111
101010
101011
111011
*/

bool isVisited[MAX][MAX] = { false };
int map[MAX][MAX]; //간선
int result[MAX] = { 0 }; //정점
int N, M;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void BFS(int x, int y) {
	isVisited[x][y] = true; //시작 위치 방문 했다고 표시
	queue<pair<int, int> > q; // 큐 생성
	q.push(make_pair(x, y)); // 시작점 넣기

	int originX, originY, nextX, nextY;
	while (!q.empty()) {
		originX = q.front().first;
		originY = q.front().second;

		q.pop();
		//인근에 방문 체크
		for (int i = 0; i < 4; i++) {
			nextX = originX + dx[i];
			nextY = originY + dy[i];

			if (nextX < 0 || nextX >= N || nextY < 0 || nextY >= M) continue; //범위 외
			if (isVisited[nextX][nextY]) continue; //방문한적 있음
			if (map[nextX][nextY] == 0) continue; //밟을수 없음

			map[nextX][nextY] = map[originX][originY] + 1; // Q: 각 배열에 2씩 들어가는거야?
			isVisited[nextX][nextY] = true;
			q.push({ nextX, nextY }); // 큐에 데이터 밀어넣기
		}

	 }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string row;
		cin >> row; // "101111" 같은 한 줄을 통째로 읽음
		for (int j = 0; j< M; j++) {
			map[i][j] = row[j] - '0'; // 문자 '0'/'1' -> 숫자 0/1
		}
	}

	BFS(0, 0);

	cout << map[N - 1][M - 1] << '\n';

	return 0;
}