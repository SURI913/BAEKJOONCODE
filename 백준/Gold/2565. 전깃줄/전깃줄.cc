#include <iostream>
#include <algorithm>

using namespace std;
#define MAX 10001
int dp[MAX];
int arr[MAX];
struct Line {
    int left;
    int right;
};
Line line[MAX];

bool Cmp(Line a, Line b) {
    if (a.left < b.left) return true;
    return false; 
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, result = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> line[i].left >> line[i].right;
    }
    sort(line + 1, line + n + 1, Cmp);
    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = i - 1; j >= 1; j--) {
            if (line[i].right > line[j].right) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        result = max(dp[i], result);
    }

    cout << n - result;
    return 0;
}
