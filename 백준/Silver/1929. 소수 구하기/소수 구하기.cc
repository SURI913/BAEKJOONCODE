#include <iostream>
#include <vector>
using namespace std;
//에라토스테네스의 체
int main() {
	int n,m;
	cin >> m >> n; //m이상 n이하의 수
	vector <int> array(n + 1, 0); // 0~n까지 배열 생성 후 0으로 초기화
	for (int i = 2; i <= n; i++) {
		array[i] = i; //인덱스 값에 맞춰 수 입력
	}

	for (int i =2 ; i * i <= n; i++) {
		if (array[i] == 0) continue; //수가 지워진 경우 넘어감
		for (int j = 2 * i; j <= n; j += i) {
			if (array[j] == 0) continue; //소수 x라면 넘어감
			else array[j] = 0; //소수 지움
		}
	}

	for (int i = m; i <= n; i++) {
		if (array[i] != 0) cout << array[i] << "\n";
	}
	return 0;
}