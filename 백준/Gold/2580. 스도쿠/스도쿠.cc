#include <iostream>
#include <vector>
#define MAX 9

using namespace std;

int sudoku[MAX][MAX];
bool Row[MAX][MAX + 1];
bool Col[MAX][MAX + 1];
bool Square[MAX][MAX + 1];

void print_sudoku() {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            cout << sudoku[i][j] << " ";
        }
        cout << "\n";
    }
}

int Square33(int x, int y) {
    return  ((x / 3) * 3 + y / 3);
}

void DFS(int n) {
    if (n == 81) {
        print_sudoku();
        exit(0);
    }
    int x = n / MAX;
    int y = n % MAX;
    if (sudoku[x][y] == 0) {
        for (int i = 1; i < 10; i++) {
            if (!Row[x][i] && !Col[y][i] && !Square[Square33(x, y)][i])
            {
                Row[x][i] = Col[y][i] = Square[Square33(x, y)][i] = true;
                sudoku[x][y] = i;
                DFS(n + 1);
                sudoku[x][y] = 0;
                Row[x][i] = Col[y][i] = Square[Square33(x, y)][i] = false;
            }
        }
    }
    else DFS(n + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //입력
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            cin >> sudoku[i][j];
            if (sudoku[i][j] != 0) {
                Row[i][sudoku[i][j]] = true; // i번째 Row에 sudoku[i][j]는 존재합니다.
                Col[j][sudoku[i][j]] = true; // j번째 Col에 sudoku[i][j]는 존재합니다.
                Square[Square33(i, j)][sudoku[i][j]] = true; // n번째 사각형에 sudoku[i][j]는 존재합니다.
            }
        }
    }

    DFS(0);

    return 0;
}
