#include <iostream>
#include <algorithm>

using namespace std;

int N, K;
int W[101] = { 0, };
int V[101] = { 0, };
int DP[101][100001];

//DP : 문제 한번 더 체크하기

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        cin >> W[i] >> V[i];
    }

    //시작할때 카운트를 위해
    for (int limit = 1; limit <= K; limit++) {
        for (int row = 1; row <= N; row++) {
            //1. 담을 수 없을 경우
            if (W[row] > limit) {
                DP[row][limit] = DP[row - 1][limit];
            }
            //2. 담을 수 있는 경우
            else {
                DP[row][limit] = max(DP[row - 1][limit - W[row]] + V[row], DP[row - 1][limit]);
            }
        }
    }

    cout << DP[N][K];

    return 0;
}
