#include <iostream>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX] = { 0, };

void dfs(int cnt, int start) // start 변수 추가
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = start; i <= n; i++) // start부터 시작
    {
        arr[cnt] = i;
        dfs(cnt + 1, i); // 다음 재귀 호출에 현재 숫자 i를 그대로 전달
    }
}

int main() {
    cin >> n >> m;
    dfs(0, 1); // 초기 start 값을 1로 설정
}
