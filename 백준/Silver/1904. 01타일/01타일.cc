#include <iostream>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    //피보나치
    int n;
    cin >> n;
    int* dp = new int[n + 1];
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i < n + 1; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2])%15746;
    }

    cout << dp[n];

    return 0;
}
