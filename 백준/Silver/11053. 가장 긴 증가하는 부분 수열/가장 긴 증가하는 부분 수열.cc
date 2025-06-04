#include <iostream>

using namespace std;
#define MAX 10001
int dp[MAX];
int arr[MAX];


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, result = 0;;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = i-1; j >= 1; j--) {
            if (arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        result = max(dp[i], result);
    }

    cout << result ;
    return 0;
}
