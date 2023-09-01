#include <iostream>
#include <cmath>
using namespace std;

//0 ≤ n ≤ 4×10^9 범위에 에라토스테네의 체를 사용 할 경우 메모리 초과
//소수 판별 알고리즘을 구현하는 과정에서 탐색 시간과 범위를 줄이기 위해서 제곱근의 개념을 이용한다.
// 
//①. 0과 1은 합성수도 소수도 아니다. 코너 케이스로 분류되므로 이 케이스를 별도로 넣어 소수 판별 알고리즘의 완성도를 높인다.
//②. 문제에서 주어진 메모리와 시간을 고려하여 어떤 방법을 써야할지 바로바로 떠올려야한다.
//③. 소수 판별 알고리즘을 구현하는 과정에서 탐색 시간과 범위를 줄이기 위해서 제곱근의 개념을 이용한다.
bool isprime(long long n) {
	if (n <= 1) { return false; }
	else if (n == 2 || n == 3) { return true; }
	else if (n % 2 == 0 || n % 3 == 0) { return false; }

	for (int i = 5; i<= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	long long tmp;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		while (!isprime(tmp)) { tmp++; }
		cout << tmp << "\n";
	}

	return 0;
}