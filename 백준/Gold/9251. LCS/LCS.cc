#include <iostream>
#include <algorithm>

using namespace std;
#define MAX 1001
int dp[MAX][MAX];
string s1, s2;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    cin >> s1>>s2;
    //시작할때 카운트를 위해
    for (int i = 1; i <= s1.size(); i++) {
        for (int j = 1; j <= s2.size(); j++) {
            if (s1[i-1] == s2[j-1]) {
                //같을떄 증가
                dp[i][j] = dp[i - 1][j - 1] +1;
            }
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); //더 큰 값 저장
        }
    }

    cout << dp[s1.size()][s2.size()];
    return 0;
}
