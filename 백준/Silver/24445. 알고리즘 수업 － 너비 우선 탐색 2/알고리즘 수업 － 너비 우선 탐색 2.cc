#include <iostream>
#include<queue>
#include <algorithm>
using namespace std;

#define MAX 100001

bool visited[MAX] = { false };
vector<int> graph[MAX]; //간선
int result[MAX] = { 0 }; //정점
int cnt = 0;

void bfs(int R) {
    //반복
    //V : 정점 집합, E : 간선 집합, R : 시작 정점
    queue<int> q;
    visited[R] = true;
    q.push(R); //큐 맨 뒤에 시작 정점 R을 추가한다.
    cnt++; // 처음 방문한 곳 카운트 + 1
    result[R] = cnt; // 처음으로 방문 cnt == 1
    while (!q.empty()) {
        int u = q.front();
        q.pop();//큐 맨 앞쪽의 요소를 삭제한다.

        //정점 u의 인접 정점 집합.(정점 번호를 오름차순으로 방문한다)
        for (int i = 0; i < graph[u].size(); i++) {
            int v = graph[u][i];
            if (!visited[v]) {
                cnt++;
                result[v] = cnt;
                visited[v] = true; //정점 v를 방문 했다고 표시한다.
                q.push(v); //큐 맨 뒤에 정점 v를 추가한다.
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, R, u, v;
    cin >> N >> M >> R;
    for (int i = 0; i < M; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); //무방향
    }

    //내림차순 정렬
    for (int i = 1; i <= N; i++)
    {
        sort(graph[i].begin(), graph[i].end(), greater<int>()); //greater<int>() 내림차순, 없으면 오름차순[기본]
    }
    bfs(R); //깊이 탐색

    for (int i = 1; i <= N; i++) cout << result[i] << '\n';
    return 0;
}
