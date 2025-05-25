#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

int minValue = INT_MAX;
int team[20];
int status[20][20] = { 0, };
bool visited[20][20] = { 0, };
int num;
//N명의 사람중 N/2명을 뽑는 조합의 모든 경우의 수를 찾아 최소값? 출력?

void DFS(int index, int count) {

    vector<int> start; // 스타트 팀원의 인덱스값
    vector<int> link; // 링크팀 팀원의 인덱스값

    int start_score = 0;
    int link_score = 0;

    if (count == num / 2) {
        for (int i = 0; i < num; i++)
        {
            if (team[i] == true) // 선택된 사람들은 start팀에
                start.push_back(i);
            else // 그 외의 사람들은 link팀으로
                link.push_back(i);
        }

        for (int i = 0; i < (num / 2); i++)
            for (int j = 0; j < (num / 2); j++)
            {
                start_score += status[start[i]][start[j]];
                link_score += status[link[i]][link[j]];
            } // 각 팀의 능력치의 합 계산
        if (abs(start_score - link_score) < minValue) //절대값으로 
            minValue = abs(start_score - link_score);
        return;
    }
    //팀나누기
    else {
        for (int i = index; i < num; i++)
        {
            if (team[i])
                continue;
            else
            {
                team[i] = true;
                DFS(i, count + 1);
                team[i] = false;
            }
        }
    }

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> num; //줄의 갯수 입력
    
    int a = num / 2;

    //능력치 입력
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            int input;
            cin >> input;
            status[i][j] = input;
        }
    }

    DFS(0, 0);

    cout <<  minValue << endl;
    return 0;
}
