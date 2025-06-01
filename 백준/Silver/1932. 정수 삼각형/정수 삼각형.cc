#include <iostream>
#include <climits>
using namespace std;
int dp[505][505];

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i + 1; j++)
            cin >> dp[i][j];

    for (int i = n - 1; i >= 1; i--)
        for (int j = 0; j < i; j++)
            dp[i - 1][j] += max(dp[i][j], dp[i][j + 1]);


    cout << dp[0][0] << endl;

    return 0;
}
