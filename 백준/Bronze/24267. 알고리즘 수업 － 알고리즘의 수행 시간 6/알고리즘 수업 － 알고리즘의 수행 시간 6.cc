#include <iostream>
using namespace std;
int main() {
    long long n, count = 0;
    cin >> n;
    //for (int i = 1; i <= n - 2; i++) {
    //    for (int j = i + 1; j <= n - 1; j++) {
    //        for (int k =  j + 1; k <= n; k++) {
    //            count++;
    //        }
    //    }
    //}

    cout << (n * (n - 2) * (n - 1)) / 6 << '\n' << 3;
    return 0;
}