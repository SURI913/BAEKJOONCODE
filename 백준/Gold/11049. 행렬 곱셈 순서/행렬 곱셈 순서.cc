#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;
#define MAX 501
int dp[MAX][MAX];
int arr[MAX][MAX];

int main() {
	int N, r, c;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}

	for (int i = 1; i < N; i++) {
		for (int j = 1; i + j <= N; j++) {
			//여기서 초기화
			dp[j][i+j] = INT_MAX;
			for (int k = j; k <= i + j; k++) {
				dp[j][i + j] = min(dp[j][i + j], dp[j][k] + dp[k + 1][i + j] + arr[j][0] * arr[k][1] * arr[i + j][1]);
			}
		}
	}
	cout << dp[1][N];
	return 0;
}