#include <iostream>
#include <vector>
using namespace std;

vector<int> board;
int n;
int result;

// 유망한 위치인지 검사하는 함수
bool isSafe(int row, int col) {
    for (int i = 0; i < row; i++) {
        // 같은 열에 위치한 퀸이 있는 경우
        if (board[i] == col) return false;
        // 대각선 충돌 검사 ( |row1 - row2| == |col1 - col2| )
        if (abs(board[i] - col) == abs(i - row)) return false;
    }
    return true;
}

void solveNQueens(int row) {
    if (row == n) {
        result++;
        return;
    }

    for (int col = 0; col < n; col++) {  // 가능한 열을 모두 탐색
        if (isSafe(row, col)) {  // 퀸을 놓을 수 있으면
            board[row] = col;    // 퀸 배치
            solveNQueens(row + 1); // 다음 행 탐색
            board[row] = -1;     // 백트래킹 (되돌아가기)
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    board.resize(n, -1);  // 초기화 (모든 행을 -1로 설정)

    //1차원 배열에  넣어야함
    //효율 고려하자
    solveNQueens(0);  // 첫 번째 행부터 탐색
    cout << result;

    return 0;
}