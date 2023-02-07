#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		//에라토스테네스의 체 로 소수판별
		vector <int> array(n + 1, 0); //소수 이다 아니다 판별
		for (int i = 2; i <= n; i++) {
			array[i] = i; //인덱스 값에 맞춰 수 입력
		}

		for (int i = 2; i * i <= n; i++) {
			if (array[i] == 0) continue; //수가 지워진 경우 넘어감
			for (int j = 2 * i; j <= n; j += i) {
				if (array[j] == 0) continue; //소수 x라면 넘어감
				else array[j] = 0; //소수 지움
			}
		}
		//소수판별 끝

		for (int j = n / 2; j > 0 ; j--) {
			if (array[j] && array[n - j]) {
				cout << j << ' ' << n - j << '\n';
				break;
			}
		}
	}
	return 0;
}