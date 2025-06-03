#include <iostream>
#include <vector>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int x;
    cin >> x;

    vector<int> dp(x + 1);

    dp[1] = 0; // 바로 1이니까
    //bottom-up
    for (int i = 2; i <= x; i++) {
        dp[i] = dp[i - 1] + 1;// 1을 빼는 연산계산?
        if (i % 3 == 0) {
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }
        if (i % 2 == 0) {
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }
    }

    cout << dp[x];

    return 0;
}
