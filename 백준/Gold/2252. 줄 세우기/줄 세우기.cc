#include<iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 32001
using namespace std;

vector<int> adj[MAX];
int inDegree[MAX] = { 0 };

int main() {
	int N, M, a, b;
	cin >> N >> M;
	//트리 노드 연결하듯이
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		adj[a].push_back(b);
		inDegree[b]++;
	}

	//토플로지 정렬
	queue<int> q;
	for (int i = 1; i <= N; i++) {
		if (inDegree[i] == 0) {
			//사이클 없는 방향 그래프니까 앞부터 파고들려고
			q.push(i);
		}
	}

	while (!q.empty()) {
		int curr = q.front();
		q.pop();
		cout << curr << " ";

		for (int next : adj[curr]) {
			inDegree[next]--;
			if (inDegree[next] == 0) {
				q.push(next);
			}
		}
	}

	return 0;
}