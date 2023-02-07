#include <iostream>
#include <vector>
using namespace std;

int main() {
	while (1) {
		int n, i;
		cin >> n;
		if (n == 0) break;
		vector <int> array(2*n + 1, 0);// 0~2*n까지 배열 생성 후 0으로 초기화
		int count = 0;
		for (int i = 0; i <= 2*n; i++) {
			array[i] = i; //인덱스 값에 맞춰 수 입력
		}
		for (i = 2; i*i <= 2 * n; i++) {
			//에라토스테네스의 체
			if (array[i] == 0) continue;

			for (int j = 2 * i; j <= 2 * n; j += i) {
				if (array[j] == 0) continue;
				else array[j] = 0; //소수 지움
			}
		}
		for (int i = n+1; i <= 2*n; i++) {
			if (array[i] != 0) count++;
		}
		cout << count << "\n";
	}
	return 0;
}