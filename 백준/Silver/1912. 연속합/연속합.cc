#include <iostream>
#include <climits>
using namespace std;
int inputInt[100001], sumInt[100001];
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    //피보나치
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> inputInt[i];

    int maxInt = INT_MIN;
    sumInt[0] = inputInt[0];

    for (int i = 0; i < n; i++) {
        sumInt[i] = max(inputInt[i] + sumInt[i - 1] ,inputInt[i]);
        maxInt = max(maxInt, sumInt[i]); 
    }
    cout << maxInt << endl;;


    return 0;
}
