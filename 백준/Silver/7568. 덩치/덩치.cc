#include<iostream>
using namespace std;

const int MAX_SIZE = 51;

int kg[MAX_SIZE];
int cm[MAX_SIZE];
int ranking[MAX_SIZE];
int N;

void Input() {

    cin >> N;
    //입력
    for (int i = 0; i < N; i++) {
        cin >> kg[i] >> cm[i];
    }
}

void Search() {
    //전체 탐색
    for (int i = 0; i < N; i++) {
        ranking[i] = 1;
        for (int other = 0; other < N; other++) {
            if (kg[i] < kg[other] && cm[i] < cm[other]) {
                // i가 other보다 작으면 등급내려감
                ranking[i]++;
            }
        }
    }
}

void Output() {
    for (int i = 0; i < N; i++) {
        cout << ranking[i] << " ";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    Input();
    Search();
    Output();

    return 0;
}