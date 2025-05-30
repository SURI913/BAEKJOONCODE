#include <iostream>
#include <climits>
using namespace std;
int dp[1001][3];
int arr[1001][3];
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, r,g,b;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> r >> g >> b;
        arr[i][0] = r;
        arr[i][1] = g;
        arr[i][2] = b;
    }

    for (int i = 1; i <= n; i++) {
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + arr[i][0];
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + arr[i][1];
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + arr[i][2];
    }
    cout << min(min(dp[n][0],dp[n][1]), dp[n][2]) << endl;;


    return 0;
}
