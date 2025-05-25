#include <iostream>

using namespace std;

int f[40];

int countFibonacci;
int countFibonacciDP;
//피보나치 재귀
int fibonacci(int num) {
    if (num == 1 || num == 2) {
        countFibonacci++;
        return 1;
    }
    else return (fibonacci(num - 1) + fibonacci(num - 2));
}

int fibonacciDP(int index) {
    //초기 조건, fibo(0)=0 fibo(1)=1 2번재부터 시작
    // F(n)은 이전 2개의 state 합
    f[1] = 1;
    f[2] = 1;

    for (int i = 3; i <= index; i++) {
        f[i] = (f[i - 1] + f[i - 2]);
        countFibonacciDP++;
    }
    return f[index];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin >> num; //횟수 입력

    fibonacci(num);
    fibonacciDP(num);

    cout << countFibonacci << " " << countFibonacciDP;
    return 0;
}
