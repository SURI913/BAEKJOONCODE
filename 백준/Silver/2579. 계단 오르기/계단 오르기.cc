#include <iostream>
#include <climits>
using namespace std;

#define MAX 301

int dp[MAX]; //최대값 계산
int arr[MAX]; //계단 입력

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> arr[i];

    dp[1] = arr[1]; //1일때 최대값
    dp[2] = arr[1] + arr[2];
    dp[3] = max(arr[2] + arr[3], arr[1] + arr[3]); //1,3을 밟거나 2,3을 밟거나

    for (int i = 4; i <= n; i++) {
        dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]); //OOXO ? OXOO
    }
    cout << dp[n];
    return 0;
}
