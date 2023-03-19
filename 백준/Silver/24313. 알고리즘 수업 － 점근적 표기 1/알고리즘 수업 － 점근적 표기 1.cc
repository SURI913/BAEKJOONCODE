#include <iostream>
using namespace std;
int main() {
	int a1, a0, c, n;
	cin >> a1 >> a0 >> c >> n;
	cout << ((a1 * n + a0 <= c * n) && (c - a1 >= 0)); //큰 모든 n에 대하여 성립
	return 0;
}