#include <iostream>
#include <vector>
using namespace std;

long long dp[101][10];

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i < 10; i++) {
        dp[1][i] = 1; //1~9까지는 계단수 1개 10부터 2개임(1,0)
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < 10; j++) {
            if(j == 0) {
                dp[i][0] = dp[i - 1][j + 1];
            }
            else if (j == 9) {
                dp[i][9] = dp[i - 1][j - 1];
            }
            else {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
            }
            dp[i][j] %= 1000000000;
        }
    }

    long long result = 0;
    for (int i = 0; i < 10; i++) {
        result +=  dp[n][i];
    }
    cout << result % 1000000000;
    return 0;
}
