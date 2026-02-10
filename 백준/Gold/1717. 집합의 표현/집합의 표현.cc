#include<iostream>
#include<vector>

#define MAX 1000001
using namespace std;

int parent[MAX];

void MakeSet() {
	for (int i = 1; i < MAX; i++) {
		parent[i] = i;
	}
}

int Find(int n) {
	if (parent[n] == n)
		return n;
	else {
		parent[n] = Find(parent[n]);
		return parent[n];
	}
}

void Union(int x, int y) {
	int rootX = Find(x);
	int rootY = Find(y);
	
	if (rootX == rootY) return;
	parent[rootX] = rootY;
}


int main() {
	ios_base::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);
	MakeSet();
	int n, m, check, a, b;
	string ment;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> check >> a >> b;
		if (check > 0) {
			// 앞이 1이면 같은 집합인지 확인 후 출력
			Find(a) == Find(b) ? ment = "YES" : ment = "NO";
			cout << ment << '\n';
		}
		else
			Union(a, b);
	}

	return 0;
}