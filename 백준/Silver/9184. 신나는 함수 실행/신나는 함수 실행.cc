#include <iostream>

using namespace std;

int dp[21][21][21];

int w(int a, int b, int c) {

    if (a <= 0 || b <= 0 || c <= 0) {
        return 1;
    }
    /*
     * a, b, c중 하나라도 20이 넘어가면 w(20, 20, 20)을 호출하기 때문에
     * dp[20][20][20] 에 저장하고 반환하면 된다.
     */
    else if (a > 20 || b > 20 || c > 20) {
        return dp[20][20][20] = w(20, 20, 20);
    }

     // 이미 계산되어 저장되어있는 경우 해당 값을 바로 반환 
    else if (dp[a][b][c] != 0) {
        return dp[a][b][c];
    }

    else if (a < b && b < c)
    {
        dp[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    }

    else {
        dp[a][b][c] =  w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    }
    return dp[a][b][c];
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int a,b,c;

    while (true)
    {
        cin >> a >> b >> c; //횟수 입력
        if (a == -1 && b == -1 && c == -1) break;
        else {
            int result = w(a, b, c);
            printf("w(%d, %d, %d) = %d\n", a,b,c,result);
        }
    }

    return 0;
}
