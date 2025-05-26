#include <iostream>

using namespace std;
long long dp[101];
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    //피보나치
    int n,t;
    cin >> t;
    dp[1] = dp[2] = dp[3] = 1;

    for (int j = 0; j < t; j++) {
        cin >> n;


        for (int i = 4; i < n + 1; i++) {
            dp[i] = (dp[i - 2] + dp[i - 3]);
        }
        cout << dp[n] << endl;;
    }


    return 0;
}
