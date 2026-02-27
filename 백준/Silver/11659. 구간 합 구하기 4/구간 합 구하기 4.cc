#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, tmp, a, b;
	int sum = 0;
	vector<int> arr;
	cin >> N >> M;
	arr.push_back(0);
	for (int i = 1; i <= N; i++) {
		cin >> tmp;
		arr.push_back(arr[i - 1] + tmp);
	}
	for (int i = 0; i < M; i++){
		cin >> a >> b; //누적합 arr[d] - arr[a-1]
		cout << arr[b] - arr[a - 1] << '\n';
		sum = 0;
	}

	return 0;
}