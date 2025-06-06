#include <iostream>

using namespace std;
#define MAX 10001
int dp[MAX];
int arr[MAX];


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    for (int i = 3; i <= n; i++) {
        dp[i] = max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]);
        dp[i] = max(dp[i - 1], dp[i]);
    }


    cout << dp[n] ;
    return 0;
}
