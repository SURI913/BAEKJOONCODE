#include <iostream>
#include<cmath>

using namespace std;


void Cantor(int n) {
    //선출력
    if (n == 0) {
        cout << '-'; 
        return;
    }

    Cantor(n - 1);

    //N번째 칸토어 집합 = N -1 번째 칸토어 집합을 2개 이은 것
    int size = pow(3, n - 1);
    for (int i = 0; i < size; i++) {
        cout << " ";
    }
    Cantor(n - 1);
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;

    while (cin >> n) {
        Cantor(n);
        cout << "\n";
    }
    return 0;
}