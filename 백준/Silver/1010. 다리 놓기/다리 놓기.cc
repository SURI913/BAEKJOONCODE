#include <iostream>
#include <math.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int n, m;
		cin >> n >> m;
		//cout << tgamma(n + 1) / (tgamma((n - m) + 1) * tgamma(m + 1));
		long long result = 1; //다리 개수 = 조합 mCn

		/*조합 계산하기*/
		if (n > m / 2) //N이 너무 클 때는 long long으로 커버 불가
			n = m - n; //mCm-n로 바꿔서 계산
		for (int i = m; i > m - n; i--)
			result *= i;
		for (int i = 1; i <= n; i++)
			result /= i;
		cout << result << "\n";
	}
	
	return 0;

}