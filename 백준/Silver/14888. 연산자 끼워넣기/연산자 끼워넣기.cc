#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

vector<int> myData;
vector<int> myOperator; //덧셈 , 뺄셈, 곱셈, 나눗셈 순서로 n개 쓸건지 알려줌
vector<int> result;
int num;
int maxValue = INT_MIN;
int minValue = INT_MAX;

void DFS(int n, int value) {
    // 종료 조건
    if (n == num - 1) {
        maxValue = max(value, maxValue);
        minValue = min(value, minValue);
        return;
    }

    if (myOperator[0] != 0) {
        //덧셈하는 경우
        myOperator[0] -= 1;
        DFS(n + 1, value + myData[n + 1]);
        myOperator[0] += 1;
    }
    if (myOperator[1] != 0) {
        //뺄셈 하는 경우
        myOperator[1] -= 1;
        DFS(n + 1, value - myData[n + 1]);
        myOperator[1] += 1;
    }
    if (myOperator[2] != 0) {
        //곱셈 하는 경우
        myOperator[2] -= 1;
        DFS(n + 1, value * myData[n + 1]);
        myOperator[2] += 1;
    }
    if (myOperator[3] != 0) {
        //나눗셈 하는 경우
        myOperator[3] -= 1;
        DFS(n + 1, value / myData[n + 1]);
        myOperator[3] += 1;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> num; //줄의 갯수 입력
    

    //수열입력
    for (int i = 0; i < num; i++) {
        int input;
        cin >> input;
        myData.push_back(input);
    }

    //연산자 입력
    for (int i = 0; i < 4; i++) {
        int input;
        cin >> input;
        myOperator.push_back(input);
    }

    DFS(0, myData[0]);

    cout << maxValue << "\n" << minValue << endl;
    return 0;
}
