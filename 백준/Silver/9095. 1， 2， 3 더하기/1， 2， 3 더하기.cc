#include<iostream>
using namespace std;

const int MAX_SIZE = 12;// 최대 11까지 가능
int arr[MAX_SIZE];
int count;
int T, N;

void Output() {
    cout << arr[N] << "\n";
}

void ButtomUP() {
    //초기 세팅 값
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;

    //점화 시작
    for (int i = 4; i <= N; i++) {
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
    }
    Output();
}

void Input() {
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;
        ButtomUP();
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    Input();

    return 0;
}