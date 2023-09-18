#include <iostream>
#pragma warning(disable : 4996)
#define MAX 50000000
using namespace std;

bool  num[MAX+1] = { 0, };
//에라토스테네스의 체
int main() {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);
	
	for (int i = 2; i * i <= MAX; i++) {
		if (num[i] == true) continue; //수가 지워진 경우 넘어감
		for (int j = 2 * i; j <= MAX; j += i) {
			if (num[j] == true) continue; //소수 x라면 넘어감
			else num[j] = true; //소수x 지움
		}
	}

	int k;
	cin >> k;
	int count = 0;
	for (long long i = 2; i < MAX; i++) {
		if (num[i] == false) {
			count++;
		}
		if (count == k) {
			cout << i << "\n";
			break;
		}
	}

	return 0;
}