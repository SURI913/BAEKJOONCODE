#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N; // N: 사람 수
	cin >> N;
	
	vector<int> P;
	for (int i = 0; i < N; i++) {
		int T;
		cin >> T;
		P.push_back(T);
	}

	sort(P.begin(), P.end()); //오름차순 정렬을 하면 최소 시간

	int time = 0;
	for (int i = 0; i < N ; i++) {
		time += P[i] * (N - i);
		// sort 후에 {1, 2, 3, 4, 5}일 때, 1은 5번 더해지고 2는 4번, 3은 3번, 4는 2번, 5는 1번 더해진다.
		//그걸 이용해서 line[i] * (n-i) 값을 모두 더해준다?
	}
	cout << time;
	return 0;
}