#include <iostream>
using namespace std;
//apart를 배열의 모습으로 표현했을때
//apart[n][k] 호, 층
//203호의 인원을 구하고자 할 때
//103호+202호 = 203호 의 인원이다.
// 그래서 apart[n-1][k]+ aprart[n][k-1]
//이를 재귀로 만들어줌

int people(int k, int n) {
	if (n == 1) return 1;
	if (k == 0) return n;
	return (people(k, n - 1) + people(k - 1, n));
}
int main() {
	int size, k, n;
	cin >> size;
	for(int i = 0; i<size;i++) {
		cin >> k >> n;
		cout << people(k, n) << endl;
	}
	
	return 0;
}