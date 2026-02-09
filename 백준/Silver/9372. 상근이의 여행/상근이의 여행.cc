#include<iostream>
#include<vector>

#define MAX 100
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);
	//상근이가 모든 도시를 여행하기 위해 타야 하는 비행기 종류의 최소 개수 == 간선의 수
	int T, N, M, a, b; //테스트 케이스, 국가 수(정점), 비행기 종류(가중치)
	//정점 -1 == 간선

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		for (int i = 0; i < M; i++) {
			cin >> a >> b;
		}
		cout << N - 1 << '\n';
	}

	return 0;
}