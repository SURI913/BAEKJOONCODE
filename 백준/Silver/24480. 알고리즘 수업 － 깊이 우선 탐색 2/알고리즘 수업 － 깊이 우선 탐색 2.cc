#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

#define MAX 100001

bool visited[MAX] = { false };
vector<int> graph[MAX]; //간선
int result[MAX] = {0}; //정점
int cnt = 0;

void dfs(int R) {
    //V : 정점 집합, E : 간선 집합, R : 시작 정점
    if (visited[R]) return;
    visited[R] = true;  //시작 정점 R을 방문 했다고 표시한다.
    cnt++; //가중치는 1임
    result[R] = cnt; // 순서 출력을 위한 결과
    for (int x = 0; x < graph[R].size(); x++) {
        dfs(graph[R][x]); //인접간선 확인
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
        graph[v].push_back(u); //양방향 가중치니까
    }

    //내림차순 정렬
    for (int i = 1; i <= N; i++)
    {
        sort(graph[i].begin(), graph[i].end(), greater<int>()); //greater<int>() 내림차순, 없으면 오름차순[기본]
    }
    dfs(R); //깊이 탐색

    for (int i = 1; i <= N; i++) cout << result[i] << '\n';
	return 0;
}