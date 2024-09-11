#include <iostream>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX] = { 0, };
bool visited[MAX] = { 0, };

void dfs(int cnt, int num)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = num; i <= n; i++) //이전 숫자 고려
    {
        if (!visited[i])
        {
            visited[i] = true;
            arr[cnt] = i;
            dfs(cnt + 1, i+1);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;
    dfs(0, 1);
}