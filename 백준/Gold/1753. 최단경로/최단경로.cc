#include <iostream>
#include<queue>
#include <algorithm>
using namespace std;

#define MAX 20001
#define INF 999999999

vector<pair<int,int>> graph[MAX];
int result[MAX];

void Dijkstra(int K) {
    result[K] = 0;
    //반복
    // (dist, vertex) 를 "가장 작은 dist"가 먼저 나오게 (min-heap)
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push(make_pair(0, K)); //가중치, 정점 
    while (!pq.empty()) {
        int w = pq.top().first;
        int u = pq.top().second;
        pq.pop();//큐 맨 앞쪽의 요소를 삭제한다.

        // lazy deletion: 더 좋은 값이 이미 result[u]에 들어있으면 이건 버림
        if (w != result[u]) continue;

        //정점 u의 인접 정점 최단거리 탐색
        for (int i = 0; i < graph[u].size(); i++) {
            int v = graph[u][i].first;
            int w_tmp = graph[u][i].second +w;

            if (w_tmp < result[v]) {
                result[v] = w_tmp;
                pq.push(make_pair(w_tmp, v));
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int V, E, K, u, v, w;
    cin >> V >> E >> K; //정점의 개수, 간선의 개수 , 시작정점
    for (int i = 0; i < E; i++)
    {
        cin >> u >> v >>w;
        graph[u].push_back(make_pair(v, w));
    }

    for (int i = 1; i <= V; i++) result[i] = INF;

    Dijkstra(K);

    for (int i = 1; i <= V; i++) {
        if (result[i] == INF) {
            cout << "INF" << '\n';
        }
        else { cout << result[i] << '\n'; }
    }
    return 0;
}
