#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K, tmp;
	vector<int> arr;
	vector<int> dp;
	cin >> N >> K;
	dp.push_back(0);
	for (int i = 1; i <= N; i++) {
		cin >> tmp;
		dp.push_back(tmp + dp[i - 1]);
	}
	for (int i = K; i <= N; i++) {
		arr.push_back(dp[i] -dp[i-K]);
	}
	sort(arr.begin(), arr.end());
	cout << arr.back() << '\n';
	
	return 0;
}