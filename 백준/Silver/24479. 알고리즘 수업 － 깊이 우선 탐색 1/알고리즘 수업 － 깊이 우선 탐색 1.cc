#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define MAX_VERTICES 100000

vector<int> result;
int cmt = 1;

typedef struct GraphType {
    int n;
    vector<int> adj_list[MAX_VERTICES + 1]; // 1-based indexing
    bool visited[MAX_VERTICES + 1];         // 1-based indexing
} GraphType;

// 그래프 초기화
void init(GraphType* g, int n) {
    g->n = n;
    for (int i = 1; i <= n; i++) { // 1-based indexing
        g->visited[i] = false;
    }
}

// 간선 삽입 연산
void insert_edge(GraphType* g, int start, int end) {
    g->adj_list[start].push_back(end);
    g->adj_list[end].push_back(start);
}

// 깊이 우선 탐색
void Dfs(GraphType* g, int v) {
    g->visited[v] = true;  // 정점 v 방문 표시
    result[v] = cmt++;     // 방문 순서 기록

    for (int w : g->adj_list[v]) { // 인접 정점 탐색
        if (!g->visited[w]) {
            Dfs(g, w); // 정점 w에서 DFS 새로 시작
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, r;  // 정점 수, 간선 수, 시작 정점
    cin >> n >> m >> r;

    GraphType* g = new GraphType;
    init(g, n);

    result.assign(n + 1, 0); // 방문 순서를 0으로 초기화

    for (int i = 1; i <= m; i++) {
        int start, end;
        cin >> start >> end;
        insert_edge(g, start, end);
    }

    // 인접 리스트를 한 번만 정렬
    for (int i = 1; i <= n; i++) {
        sort(g->adj_list[i].begin(), g->adj_list[i].end());
    }

    Dfs(g, r);

    for (int i = 1; i <= n; i++) {
        cout << result[i] << '\n';
    }

    delete g; // 동적 메모리 해제

    return 0;
}